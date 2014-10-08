#!/usr/bin/env python

import roslib
import rospy
import smach
import smach_ros

from std_msgs.msg import *
from geometry_msgs.msg import *
from ObjectData.msg import *

def callback(object_data):
	#determining the size of the image
	size_width=object_data.image_rgb.width
	size_height=object_data.image_rgb.height
	
	#creating point cloud
	
	
	#adding all
	

def main():
	rospy.init_node('Converter')
	topic_object = rospy.get_param('~topic2read', '/object_data')
	rospy.Subscriber(topic_object, ObjectData, callback)

if __name__ == '__main__':
    main()