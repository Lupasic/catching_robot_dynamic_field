#!/usr/bin/env python

import geometry_msgs.msg
import rospy
import tf2_ros
from fiducial_msgs.msg import FiducialTransformArray

# robot_base_offset = [0.256, 0.09+0.396, -0.341, -0.5, 0.5, 0.5, 0.5]
robot_base_offset = [0.245, 0.09, -0.388, -0.5, 0.5, 0.5, 0.5]


def TFcallback(data):
    global br1, br2, t1, t2
    markers = iter(data.transforms)
    for marker in markers:
        if (marker.fiducial_id == 7):
            t1.header.stamp = rospy.Time.now()
            t1.transform.translation.x = marker.transform.translation.x
            t1.transform.translation.y = marker.transform.translation.y
            t1.transform.translation.z = marker.transform.translation.z
            t1.transform.rotation.x = marker.transform.rotation.x
            t1.transform.rotation.y = marker.transform.rotation.y
            t1.transform.rotation.z = marker.transform.rotation.z
            t1.transform.rotation.w = marker.transform.rotation.w
            br1.sendTransform(t1)

            t2.header.stamp = rospy.Time.now()
            t2.transform.translation.x = robot_base_offset[0]
            t2.transform.translation.y = robot_base_offset[1]
            t2.transform.translation.z = robot_base_offset[2]
            t2.transform.rotation.x = robot_base_offset[3]
            t2.transform.rotation.y = robot_base_offset[4]
            t2.transform.rotation.z = robot_base_offset[5]
            t2.transform.rotation.w = robot_base_offset[6]
            br2.sendTransform(t2)


if __name__ == '__main__':
    rospy.init_node('tf_from_cam_to_robot')

    br1 = tf2_ros.TransformBroadcaster()
    t1 = geometry_msgs.msg.TransformStamped()
    t1.header.frame_id = "camera_color_optical_frame"
    t1.child_frame_id = "aruco_marker_7"

    br2 = tf2_ros.StaticTransformBroadcaster()
    t2 = geometry_msgs.msg.TransformStamped()
    t2.header.frame_id = "aruco_marker_7"
    t2.child_frame_id = "robot_base"

    rospy.Subscriber("/fiducial_transforms",
                     FiducialTransformArray, TFcallback)
    rospy.spin()
