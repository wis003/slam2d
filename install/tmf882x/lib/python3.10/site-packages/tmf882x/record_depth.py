import rclpy
from rclpy.node import Node

import numpy as np
from tmf882x_interfaces.msg import TMF882XMeasure

class RecordDepth(Node):
    def __init__(self):
        super().__init__('record_depth')

        self.recording = []
        self.subscriber = self.create_subscription(TMF882XMeasure, 'tmf882x', self.sub_callback, 1)

    def sub_callback(self, msg):
        self.recording.append([self.get_clock().now().nanoseconds * 1e-9, msg.depths_1])
        print(self.recording)

def main(args=None):
    rclpy.init(args=args)
    record_depth = RecordDepth()
    rclpy.spin(record_depth)
    np.save('asdfxyz', np.array(record_depth.recording))

    record_depth.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
