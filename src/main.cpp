#include "converting.h"

int main(int argc, char** argv)
{
    ros::init(argc,argv,"point_stamped_convert");
    Converting p(ros::this_node::getName());
    ros::spin();
    return 0;
}
