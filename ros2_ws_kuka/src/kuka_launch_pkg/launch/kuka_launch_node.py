from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='joy',
            executable='joy_node',
            output='screen',
        ),
        Node(
            package='joystick_to_serial_pkg',
            executable='joystick_to_serial_node',
            output='screen',
        ),
        Node(
            package='serial_communication_pkg',
            executable='serial_communication_node',
            output='screen',
        )
    ])

