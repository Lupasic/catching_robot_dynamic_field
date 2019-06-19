import rospy
from geometry_msgs.msg import PointStamped, Point
from sensor_msgs.msg import Image

pub = rospy.Publisher('camera_pixel_to_camera_obj', PointStamped, queue_size=10)


def callback(data):
    global pub

    # TODO transform

    point_stamped = PointStamped()
    point_stamped.header.stamp = rospy.Time.now()
    point_stamped.header.frame_id = "camera_color_optical_frame"
    point_stamped.point = None
    pub.publish(point_stamped)


if __name__ == '__main__':
    rospy.init_node('camera_pixel_to_camera_obj', anonymous=True)

    rospy.Subscriber("/pixel_from_camera", Point, callback)
    rospy.Subscriber("/camera/align_depth/image_raw", Image, callback)

    rospy.spin()
