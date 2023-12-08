# from pathlib import Path
# from rosbags.highlevel import AnyReader
# from tmf882x_interfaces.msg import TMF882XMeasure

# # create reader instance and open for reading
# with AnyReader([Path('/home/robotics_roomba_2/slam2d/my_bag1')]) as reader:
#     connections = [x for x in reader.connections if x.topic == '/tmf882x']
#     for connection, timestamp, rawdata in reader.messages(connections=connections):
#         print(rawdata)
#         msg = reader.deserialize(rawdata, connection.msgtype)
#         print(msg.header.frame_id)

import rosbag2_py
from tmf882x_interfaces.msg import TMF882XMeasure

# The bag file should be in the same directory as your terminal
bag = rosbag.Bag('/home/robotics_roomba_2/slam2d/my_bag1/my_bag1_0.db3')
topic = '/tmf882x'

for topic, msg, t in bag.read_messages(topics=topic):
    print(t, msg.time, msg.depth_1)
#     x = msg.x
#     y = msg.y

#     df = df.append(
#         {'x': x,
#          'y': y},
#         ignore_index=True
#     )

# df.to_csv('out.csv')