// Radio Transmitter with
// APC220 RF transmitter
// and nunchuck

#include <Wire.h>
#include "Nunchuk.h"
#include <VirtualWire.h>


// the following line.
//#define DEBUG 1
//

#define DEADZONE 5

#define limit(number, min, max) (((number) > (max)) ? (max) : (((number) < (min)) ? (min) : (number)))

// and for the radio module:
#define LED 13
#define RF_set 12
int channelSelect = 0;

#define REMOTE_BUFFER 40
unsigned char Data[REMOTE_BUFFER];
unsigned long remoteTimeout, loopTime;
int validMessage;

void setup() {
#ifdef DEBUG
  Serial.begin(115200);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }
#endif

  Serial1.begin(9600);

  Wire.begin();
  nunchuk_init();

  pinMode(LED, OUTPUT);

#ifdef DEBUG
  Serial.println("started up");
#endif
}

unsigned long looptime = 0;

void loop() {
  static int aValue = 0;
  static int bValue = 0;
  static int cValue = 0;
#ifdef DEBUG
  if (Serial1.available() > 0) {
    int value = Serial.read();
  }
#endif

  if (millis() > looptime + 49) {  // 20Hz
    looptime = millis();

    if (nunchuk_read()) {
      // Read inputs and update maps
      aValue = limit(map(nunchuk_joystickX(), -125, 125, 0, 255), 1, 254);
      bValue = limit(map(nunchuk_joystickY(), -125, 125, 0, 255),

      if (aValue < DEADZONE && aValue > -DEADZONE) {
        aValue = 0;
      }
      if (bValue < DEADZONE && bValue > -DEADZONE) {
        bValue = 0;
      }

      cValue = 2 * nunchuk_buttonC() + nunchuk_buttonZ();

      RobotWrite(13, aValue, bValue, cValue, 0, 0);
    }
  }
}

void RFsetSettings(int channel) {
  digitalWrite(RF_set, LOW);  // pulling SET to low will put apc220 in config mode
  delay(10);                  // stabilize please
  char frequency[] = "444000";

  //Serial1.print("WR "); // ask for data
  //Serial1.print(frequency);
  Serial1.println("WR 433900 3 9 3 0");
  // format: WR Frequency RFDataRate OutputPower UART-Rate Series check
  // Frequency: Unit is KHz,for example 434MHz is 434000
  // RF Data Rate: 1,2,3 and 4 refer to 2400,4800,9600,19200bps
  // Output Power: 0 to 9, 9 means 13dBm(20mW)
  // UART Rate: 0,1,2,3,4,5 and 6 refers to 1200,2400,4800,9600, 19200,38400,57600bps
  // Series Checkout: Series checkout:0 means no check,1 means even parity,2 means odd parity.

  delay(10);
#ifdef DEBUG
  while (Serial1.available()) {
    Serial.write(Serial1.read());
  }
#endif
  digitalWrite(RF_set, HIGH);  // put apc220 back in operation
  delay(200);
}

void RFgetSettings(void) {
  digitalWrite(RF_set, LOW);  // pulling SET to low will put apc220 in config mode
  delay(10);                  // stabilize please
  Serial1.println("RD");      // ask for data
  delay(10);
#ifdef DEBUG
  while (Serial1.available()) {
    Serial.write(Serial1.read());
  }
#endif
  digitalWrite(RF_set, HIGH);  // put apc220 back in operation
  delay(200);
}

void RobotWrite(int board, int x, int y, int r, unsigned char v, unsigned char m) {
  unsigned char length = 10;

  unsigned char r_hi = (byte)(r >> 8);
  unsigned char r_lo = (byte)(r & 0xFF);
  unsigned char x_hi = (byte)(x >> 8);
  unsigned char x_lo = (byte)(x & 0xFF);
  unsigned char y_hi = (byte)(y >> 8);
  unsigned char y_lo = (byte)(y & 0xFF);

  unsigned char checksum = ~(board + length + 0x03 + v + r_hi + r_lo + x_lo + x_hi + y_hi + y_lo + m);
  unsigned char buff[length + 4] = {
    0xFF, 0xFF,            // Header
    (unsigned char)board,  //ID
    length,                // length
    0x03,                  // write
    x_lo,
    x_hi,
    y_lo,
    y_hi,
    r_lo,
    r_hi,
    v,
    m,
    checksum
  };
  RFWriteRaw(buff, length + 4);
}

/********************************************************************
   RAW SERIAL COMMUNICATION USING RS485 PROTOCOL

   RS485 uses an extra bit, being the Send/Receive bit. Therefore, we need
   'wrappers' around the Serial.XXX()'s that takes care of handling it.
   These functions are below.
 ********************************************************************/


// Writes the characters in buffer to the RS485. Blocks until the
// sending has finished.
void RFWriteRaw(char *buffer, int length) {
  //digitalWrite(RS485_SR, HIGH);
  if (digitalRead(LED) == 0) digitalWrite(LED, HIGH);
  else digitalWrite(LED, LOW);
  Serial1.write((uint8_t *)buffer, length);
  Serial1.flush();  // waits for the buffer to be empty
  //digitalWrite(RS485_SR, LOW); // is necessary when we listen too (but we don't)
}
