#!/usr/bin/env python

import rospy
from sensor_msgs.msg import CompressedImage, CameraInfo

info = None

RATE = 0.5


def delay_image():
    global info
    info_publisher = rospy.Publisher(
        '/camera/aruco_delay/camera_info', CameraInfo, queue_size=1)
    image_publisher = rospy.Publisher(
        '/camera/aruco_delay/image_raw/compressed', CompressedImage, queue_size=1)
    rate = rospy.Rate(RATE)
    while not rospy.is_shutdown():
        print("Publishing")
        image = rospy.wait_for_message(
            "/camera/color/image_raw/compressed", CompressedImage)
        image_publisher.publish(image)
        info_publisher.publish(info)
        rate.sleep()


if __name__ == '__main__':
    rospy.init_node('aruco_delay')

    info = rospy.wait_for_message(
        "/camera/aligned_depth_to_color/camera_info", CameraInfo)

    try:
        delay_image()
    except rospy.ROSInterruptException:
        pass
