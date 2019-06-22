#include "converting.h"

Converting::Converting(std::string name)
{
    std::string subscribe_point_topic, output_file;
    nh.getParam("/point_stamped_convert/point_topic", subscribe_point_topic);
    nh.getParam("/point_stamped_convert/output_file_point", output_file);
    fout.open(output_file.c_str());

    curPointData = nh.subscribe(subscribe_point_topic, 1 ,&Converting::pointCallback, this);
    
}

void Converting::pointCallback(const geometry_msgs::PointStamped::ConstPtr &msg)
{
    putInFilePoint(msg);
}


void Converting::putInFilePoint(const geometry_msgs::PointStamped::ConstPtr &msg)
{
    fout << msg->point.x << " " << msg->point.y << " " << msg->point.z << std::endl;
}

