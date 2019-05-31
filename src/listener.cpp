#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg) 
{
  std::cout << "Escuché: " << msg->data.c_str() << std::endl;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber chatter_sub = 
                n.subscribe("chatter", 100, chatterCallback);
  ros::spin();
  return 0;
}
