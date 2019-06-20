#!/usr/bin/env python

import rospy
import tf2_geometry_msgs  # import the packages first
import tf2_ros
from geometry_msgs.msg import PointStamped

pub = rospy.Publisher('obj_from_camera_to_robot_frame', PointStamped, queue_size=10)


def TFcallback(data):
    global pub, tf_buffer
    try:
        transform = tf_buffer.lookup_transform("robot_base",
                                               data.header.frame_id,  # source frame
                                               rospy.Time(0),  # get the tf at first available time
                                               rospy.Duration(1.0))
    except Exception:
        return 0
    point_stamped_transformed = PointStamped()
    point_stamped_transformed.header.stamp = rospy.Time.now()
    point_stamped_transformed.header.frame_id = "robot_base"
    temp = tf2_geometry_msgs.do_transform_point(data, transform)
    point_stamped_transformed.point = temp.point
    pub.publish(point_stamped_transformed)


if __name__ == '__main__':
    rospy.init_node('obj_from_camera_to_robot_frame', anonymous=True)

    tf_buffer = tf2_ros.Buffer(rospy.Duration(1200.0))  # tf buffer length
    tf_listener = tf2_ros.TransformListener(tf_buffer)

    rospy.Subscriber("/camera_pixel_to_camera_obj", PointStamped, TFcallback)
    rospy.spin()
