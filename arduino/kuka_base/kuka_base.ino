#include "DynamixelReader.h"
#include <util/atomic.h>  // For the ATOMIC_BLOCK macro
#include <SimpleFOC.h>

#define FASTTHRESHOLDRAD 3  // maximum rads/s for the wheels
#define DEADZONE 10         // nunchuck center deadzone

#define leftDIR 11
#define leftPWMH 10
#define leftENA 2   // Encoder interrupt pin
#define leftENB A2  // Encoder digi in

#define rightDIR 8
#define rightPWMH 5
#define rightENA 3   // Encoder interrupt pin
#define rightENB A5  // Encoder digi in


// for the communication:
#define REMOTE_BUFFER 64
unsigned char Data[REMOTE_BUFFER];
unsigned long remoteTimeout, loopTime;
#define RS485_SR 12

int validMessage;  // Variable to check if remote is still connected
int usingRadio;    // Variable to check if radio remote is being used
int usingPS3;      // Variable to check if PS3 remote is being used

// Wheel positioning

// Left wheel
double pos_R = 0;
volatile double posTicks_L = 0;
long posPrev_L = 0;

float rads_L = 0;
float target_L = 0;
float targetFilt_L = 0;
float integral_L = 0;

// Right wheel
double pos_L = 0;
volatile double posTicks_R = 0;
long posPrev_R = 0;

float rads_R = 0;
float target_R = 0;
float targetFilt_R = 0;
float integral_R = 0;


long prevT = 0;  // Time variable

LowPassFilter filterRemote_L = LowPassFilter(0.05);
LowPassFilter filterRemote_R = LowPassFilter(0.05);

void setup() {
  Serial.begin(115200);  // Serial communication with computer
  Serial1.begin(9600);   // Serial communication with radio chip

  // Setup pins for left motor
  pinMode(leftPWMH, OUTPUT);
  pinMode(leftDIR, OUTPUT);
  pinMode(leftENA, INPUT);  // Interrupt pin
  pinMode(leftENB, INPUT);
  attachInterrupt(digitalPinToInterrupt(leftENA), readEncoder_L, RISING);  // Attach the callback function to the interrupt pin


  // Setup pins for right motor
  pinMode(rightPWMH, OUTPUT);
  pinMode(rightDIR, OUTPUT);
  pinMode(rightENA, INPUT);  // Interrupt pin
  pinMode(rightENB, INPUT);
  attachInterrupt(digitalPinToInterrupt(rightENA), readEncoder_R, RISING);  // Attach the callback function to the interrupt pin

  TCCR1B = 1;  // to set a higher PWM frequency
  TCCR3B = 1;  // to set a higher PWM frequency
}

unsigned long looptimeRemote = 0;
unsigned long looptimePID = 0;

void loop() {
  DynamixelPoll();
  ROSJoystickData();

  if (millis() >= looptimeRemote + 10) {  // 100Hz
    if (remoteTimeout < 100) remoteTimeout++;
    looptimeRemote = millis();

    if (remoteTimeout > 50 && validMessage > 0) {
      // remote has timed out
      // STOP THE VEHICLE !!

      validMessage = 0;
      target_L = 0;
      target_R = 0;
    }
  }


  if (millis() >= looptimePID + 1) {  // 1000 Hz
    looptimePID = millis();
    controlPID();
  }
}

void controlPID() {
  // Atomic block makes sure setting the position variable is not interrupted by the encoder interrupts
  ATOMIC_BLOCK(ATOMIC_RESTORESTATE) {
    pos_L = posTicks_L;
    pos_R = posTicks_R;
  }

  long currT = micros();
  float deltaT = ((float)(currT - prevT)) / 1.0e6;

  float velocity_L = (pos_L - posPrev_L) / deltaT;
  posPrev_L = pos_L;

  float velocity_R = (pos_R - posPrev_R) / deltaT;
  posPrev_R = pos_R;

  prevT = currT;

  // Wheel variables, calculated by Cliff ten Barge
  rads_L = velocity_L * 0.000427;
  rads_R = velocity_R * 0.000427;

  float kp = 57.3;
  float ki = 30;

  float error_L = targetFilt_L - rads_L;
  float error_R = targetFilt_R - rads_R;

  integral_L = integral_L + error_L * deltaT;
  integral_R = integral_R + error_R * deltaT;

  float control_L = kp * error_L + ki * integral_L;
  float control_R = kp * error_R + ki * integral_R;

  int power_L = (int)fabs(control_L);
  int power_R = (int)fabs(control_R);

  if (targetFilt_L < 0.1 && targetFilt_L > -0.1 && targetFilt_R < 0.1 && targetFilt_R > -0.1) {  // Prevents small shakes when coming to a halt
    power_L = 0;
    power_R = 0;
  }

  setLeftMotorPID(readDir(control_L), power_L);
  setRightMotorPID(readDir(control_R), power_R);
}

// Function for mapping floats properly
float mapfloat(long x, long in_min, long in_max, long out_min, long out_max) {
  return (float)(x - in_min) * (out_max - out_min) / (float)(in_max - in_min) + out_min;
}


void ROSJoystickData() {
  if (Serial.available()) {
    String received = Serial.readStringUntil('\n');
    received.trim();

    // Check if we have received the ready for data command and send the wheel data accordingly
    if (received == "RDY_DATA") {
      String wheelData = String(rads_L) + "," + String(rads_R) + "," + String(pos_L) + "," + String(pos_R);
      Serial.println(wheelData);
    } else if (usingRadio == 0) {
      // Else the data is a setpoint command
      int separator = received.indexOf(',');

      String xStr = received.substring(0, separator);
      String yStr = received.substring(separator + 1);

      int xSetpoint = xStr.toInt();
      int ySetpoint = yStr.toInt();

      if (xSetpoint >= 0 && xSetpoint <= 255 && ySetpoint >= 0 && ySetpoint <= 255) {  // sanity check
        if (ySetpoint < (127 - DEADZONE) || ySetpoint > (127 + DEADZONE) || xSetpoint < (127 - DEADZONE) || xSetpoint > (127 + DEADZONE)) {
          usingPS3 = 1;

          target_L = mapfloat(constrain((ySetpoint - 127) + (xSetpoint - 127), -127, 127), -127, 127, FASTTHRESHOLDRAD, -FASTTHRESHOLDRAD);
          target_R = mapfloat(constrain((xSetpoint - 127) - (ySetpoint - 127), -127, 127), -127, 127, -FASTTHRESHOLDRAD, FASTTHRESHOLDRAD);

        } else {
          usingPS3 = 0;

          target_L = 0;
          target_R = 0;
        }
      }
      // Set filtered target speed, this makes sure the robot can not change its setpoint too fast and prevents it from falling over in extreme situations
      targetFilt_L = filterRemote_L(target_L);
      targetFilt_R = filterRemote_R(target_R);
    } else {
      usingPS3 = 0;
    }
  }
}


void ProcessDynamixelData(const unsigned char ID, const int dataLength, const unsigned char* const Data) {
  validMessage = 1;
  remoteTimeout = 0;
  if (Data[0] == 0x03) {  //write
    int xSetpoint = Data[1] + 256 * Data[2];
    int ySetpoint = Data[3] + 256 * Data[4];
    int buttons = Data[5] + 256 * Data[6];

    if (buttons > 0) {
      usingRadio = 1;
    }

    if (xSetpoint >= 0 && xSetpoint <= 255 && ySetpoint >= 0 && ySetpoint <= 255) {  // sanity check
      if (ySetpoint < (127 - DEADZONE) || ySetpoint > (127 + DEADZONE) || xSetpoint < (127 - DEADZONE) || xSetpoint > (127 + DEADZONE)) {
        usingRadio = 1;

        target_L = mapfloat(constrain((ySetpoint - 127) + (xSetpoint - 127), -127, 127), -127, 127, FASTTHRESHOLDRAD, -FASTTHRESHOLDRAD);
        target_R = mapfloat(constrain((xSetpoint - 127) - (ySetpoint - 127), -127, 127), -127, 127, -FASTTHRESHOLDRAD, FASTTHRESHOLDRAD);

      } else {
        if (buttons == 0) {
          usingRadio = 0;
        }

        if (usingPS3 == 0) {
          target_L = 0;
          target_R = 0;
        }
      }
    }
  }

  targetFilt_L = filterRemote_L(target_L);
  targetFilt_R = filterRemote_R(target_R);
}

int readDir(int control) {
  if (control < 0) {
    return 0;
  } else {
    return 1;
  }
}

void setLeftMotorPID(int dir, int pwm) {
  digitalWrite(leftDIR, dir);
  analogWrite(leftPWMH, pwm);
}

void setRightMotorPID(int dir, int pwm) {
  digitalWrite(rightDIR, dir);
  analogWrite(rightPWMH, pwm);
}

void readEncoder_L() {
  if (digitalRead(leftENB) == LOW) {
    posTicks_L--;
  } else {
    posTicks_L++;
  }
}

void readEncoder_R() {
  if (digitalRead(rightENB) == LOW) {
    posTicks_R--;
  } else {
    posTicks_R++;
  }
}
