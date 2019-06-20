#!/usr/bin/env python

import cv_bridge
import rospy
from geometry_msgs.msg import PointStamped, Point
from sensor_msgs.msg import Image, CameraInfo

pub = rospy.Publisher('camera_pixel_to_camera_obj', PointStamped, queue_size=10)
bridge = cv_bridge.CvBridge()

# 1 value is col second is row
cv_image = None
K = None


def callback(data):
    global pub, cv_image, K
    if cv_image is not None and K is not None:
        pixel_depth = float(cv_image[int(data.x)][int(data.y)]) * 0.001

        point_stamped = PointStamped()
        point_stamped.header.stamp = rospy.Time.now()
        point_stamped.header.frame_id = "camera_color_optical_frame"
        point_stamped.point.x = pixel_depth * ((data.x - K[2]) * (1 / K[0]))
        point_stamped.point.y = pixel_depth * ((data.y - K[5]) * (1 / K[4]))
        point_stamped.point.z = pixel_depth
        pub.publish(point_stamped)


def imageCallack(data):
    global bridge, cv_image
    cv_image = bridge.imgmsg_to_cv2(data, desired_encoding="passthrough")


def cameraCallback(data):
    global K
    K = data.K


if __name__ == '__main__':
    rospy.init_node('camera_pixel_to_camera_obj', anonymous=True)

    rospy.Subscriber("/pixel_from_camera", Point, callback)
    rospy.Subscriber("/camera/aligned_depth_to_color/image_raw", Image, imageCallack)
    rospy.Subscriber("/camera/aligned_depth_to_color/camera_info", CameraInfo, cameraCallback)

    rospy.spin()
