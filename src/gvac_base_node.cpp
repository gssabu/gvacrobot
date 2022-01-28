#include "gvac_base.h"

int main(int argc, char** argv )
{
    ros::init(argc, argv, "gvac_base_node");
    GvacBase gvac;
    ros::spin();
    return 0;
}
