#!/usr/bin/env python
import rospy
from std_msgs.msg import String

rospy.init_node('talker', anonymous=False)
pub = rospy.Publisher('chatter', String, queue_size=100)
rate = rospy.Rate(10)
count = 0
while not rospy.is_shutdown():
    hello_str = "[Py] Hola mundo %s" % count
    count += 1
    print(hello_str)
    pub.publish(hello_str)
    rate.sleep()
