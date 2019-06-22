#include <ros/ros.h>
#include <std_msgs/Float32.h>
#include <geometry_msgs/PointStamped.h>
#include <cmath>
#include <std_msgs/String.h>
#include <fstream>


class Converting
{
protected:
    ros::NodeHandle nh;
    ros::Subscriber curPointData;
    std::ofstream fout;
    std::ofstream fout2;
    void putInFilePoint(const geometry_msgs::PointStamped::ConstPtr &msg);

public:
    Converting(std::string name);
    void pointCallback(const geometry_msgs::PointStamped::ConstPtr &msg);

};

