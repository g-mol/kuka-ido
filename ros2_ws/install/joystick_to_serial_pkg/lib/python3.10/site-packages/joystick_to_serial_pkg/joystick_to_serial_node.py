import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import Joy


class JoystickToSerialNode(Node):
    def __init__(self):
        super().__init__("joystick_to_serial_node")
        self.joystick_subscription = self.create_subscription(
            Joy, "joy", self.joystick_callback, 10)
        self.serial_pub = self.create_publisher(String, 'joystick_serial', 10)

    def joystick_callback(self, msg: Joy):
        # convert joystick axes values from -1 to 1 to a string with value ranging from 0 to 255.
        x = str(int((-msg.axes[0] + 1) * 127.5))
        y = str(int((msg.axes[1] + 1) * 127.5))

        # form the string message
        str_msg = String()
        str_msg.data = x + "," + y

        self.serial_pub.publish(str_msg)


def main(args=None):
    rclpy.init(args=args)

    joystick_to_serial_node = JoystickToSerialNode()

    rclpy.spin(joystick_to_serial_node)

    joystick_to_serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
