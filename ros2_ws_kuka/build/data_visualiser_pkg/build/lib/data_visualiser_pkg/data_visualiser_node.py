import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from kuka_msgs_pkg.msg import SingleWheelData

class DataVisualiser(Node):
    def __init__(self):
        super().__init__("data_visualiser")
        self.subscription = self.create_subscription(
            String, 'arduino_wheel_data', self.listener_callback, 10)
        self.publisher_ = self.create_publisher(SingleWheelData, 'single_wheel_data', 10)

    def listener_callback(self, msg):
        # parse the msg.data here and convert it into SingleWheelData type
        position = float(msg.data)
        single_wheel_data = SingleWheelData()
        single_wheel_data.position = position
        self.publisher_.publish(single_wheel_data)

def main(args=None):
    rclpy.init(args=args)

    data_visualiser = DataVisualiser()

    rclpy.spin(data_visualiser)

    data_visualiser.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

