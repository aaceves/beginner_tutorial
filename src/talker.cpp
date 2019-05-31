#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "talker");
  ros::NodeHandle n;
  ros::Publisher chatter_pub = 
             n.advertise<std_msgs::String>("chatter", 100);
  ros::Rate loop_rate(10);
  int count = 0;
  while (ros::ok())  {
    std_msgs::String  msg;
    std::stringstream  ss;
    ss << "Hola mundo " << count;
    msg.data = ss.str();
    std::cout << msg.data.c_str() << std::endl;
    chatter_pub.publish(msg);
    ros::spinOnce();
    loop_rate.sleep();
    ++count;
  }
  return 0;
} 
