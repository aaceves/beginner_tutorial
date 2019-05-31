#!/usr/bin/env python
import rospy
from std_msgs.msg import String

def callback(data):
    msg = "[Py] Escuche:ros %s" %data.data
    print(msg)
    
rospy.init_node('listener', anonymous=False)
rospy.Subscriber("chatter", String, callback)
rospy.spin()
