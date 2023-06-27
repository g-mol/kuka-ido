import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial
import time
import threading
from kuka_msgs_pkg.msg import WheelData

# create a serial port object
serial_port = serial.Serial('/dev/ttyACM0', 115200, timeout=1)

class SerialCommunicationNode(Node):
    def __init__(self):
        super().__init__("serial_communication_node")
        self.serial_subscription = self.create_subscription(
            String, "joystick_serial", self.serial_callback, 10)
        
        self.left_wheel_pub = self.create_publisher(WheelData, '/WheelData/left', 10)
        self.right_wheel_pub = self.create_publisher(WheelData, '/WheelData/right', 10)
        
        self.data_request_timer = self.create_timer(0.1, self.send_data_request) # 10Hz rate
        self.waiting_for_data = False  # Added state variable
        self.start_data_listener()  # Start the data listener thread

    def serial_callback(self, msg: String):
        # If we're not waiting for data, send joystick command
        if not self.waiting_for_data:
            # msg.data should already be a string
            serial_port.write((msg.data + '\n').encode())

    def send_data_request(self):
        # Request data and set state variable to True
        serial_port.write('RDY_DATA\n'.encode())
        self.waiting_for_data = True

    def start_data_listener(self):
        def data_listener():
            while True:
                if serial_port.inWaiting() > 0:
                    data = serial_port.readline().decode().strip()  # Read data
                    # print(f"Received data: {data}")  # Print data
                    self.waiting_for_data = False  # Reset waiting state
                    
                    vel_L, vel_R, pos_L, pos_R = map(float, data.split(','))
                    
                    left_wheel_data = WheelData()
                    left_wheel_data.position = pos_L
                    left_wheel_data.velocity = vel_L
                    self.left_wheel_pub.publish(left_wheel_data)
                    
                    right_wheel_data = WheelData()
                    right_wheel_data.position = pos_R
                    right_wheel_data.velocity = vel_R
                    self.right_wheel_pub.publish(right_wheel_data)

        listener_thread = threading.Thread(target=data_listener)
        listener_thread.start()

def main(args=None):
    rclpy.init(args=args)
    serial_communication_node = SerialCommunicationNode()
    rclpy.spin(serial_communication_node)
    serial_communication_node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

