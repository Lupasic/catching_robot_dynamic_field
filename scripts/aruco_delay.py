#!/usr/bin/env python

import rospy
from sensor_msgs.msg import Image, CameraInfo

RATE = 1


def delay_image():
    info_publisher = rospy.Publisher('camera_info', CameraInfo, queue_size=1)
    image_publisher = rospy.Publisher('image_raw', Image, queue_size=1)
    rate = rospy.Rate(RATE)
    while not rospy.is_shutdown():
        print("Publishing")
        image = rospy.wait_for_message("/camera/color/image_raw", Image)
        image_publisher.publish(image)
        info_publisher.publish()
        rate.sleep()


if __name__ == '__main__':
    global info
    rospy.init_node('aruco_delay')

    info = rospy.wait_for_message("/camera/aligned_depth_to_color/camera_info", CameraInfo)

    try:
        delay_image()
    except rospy.ROSInterruptException:
        pass
