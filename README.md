Running RPLidar SLAM:
1. enable serial port 'sudo chmod 777 /dev/ttyACM0' or 'sudo chmod 777 /dev/ttyUSB0'
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

Next:
1. ros2 run tmf882x tmf882x_pub
2. ros2 topic echo /tmf882x 

Record ros2bag: 'ros2 bag record -o folder_name /topic'
Convert ros2bag to csv: 'ros2bag-convert xxxx.db3'

rplidar notes: 721 measurements per 2pi rotation
Note: SPAD mount is ~21 cm away from lidar
http://bucket.download.slamtec.com/5586c3ce11eda9f273746a8d06dc30eb55337382/LD601_SLAMTEC_rplidar_datasheet_S1_v1.0_en.pdf