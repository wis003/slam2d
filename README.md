Running RPLidar SLAM:
1. enable serial port 'sudo chmod 777 /dev/ttyACM0'
2. run 'rviz2 -d ~/slam2d/install/create3_lidar/share/create3_lidar/rviz/create3_lidar.rviz' for visualization
3. run 'ros2 launch create3_lidar sensors_launch.py' to start lidar
4. run 'ros2 launch create3_lidar slam_toolbox_launch.py' to start SLAM
5. run 'ros2 run teleop_twist_keyboard teleop_twist_keyboard' to move robot


Model: Arduino Uno R3
Pin connections: Red - 3.3V, Black - GND, Blue - SDA, Yellow - SCL
Flashing instructions:
1. enable serial port 'sudo chmod 777 /dev/ttyACM0'
2. open ./src/ProximitySensors/tree/master/TMF882X/Arduino/depth_img/arduino/read_depth_continuously/read_depth_continuously.ino in Arduino IDE
3. Board: "Arduino Uno", Port: "/dev/ttyACM0 (Arduino Uno)", Programmer: "Arduino as ISP (ATmega32U4)"

See https://github.com/uwgraphics/tmf882x/blob/main/tmf882x/tmf882x_pub.py for sensor reading example# slam2d
