#include <string.h>
#include "ros/ros.h"
#include "sensor_msgs/PointCloud2.h"
#include "geometry_msgs/PoseStamped.h"
#include "std_msgs/Bool.h"

#include "pcl_ros/point_cloud.h"
#include "pcl/io/ply_io.h"

// PCL specific includes
#include <pcl/ros/conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include "converter.hpp"

#include "convert_from_objectdata_to_pcl/ObjectData.h"

/***************Variable globales *************/

Converter<pcl::PointXYZRGB> conv;

/**********************************************/

void callback(const convert_from_objectdata_to_pcl::ObjectData& data){
	
}

int main (int argc, char **argv){
	
	ros::init(argc, argv, "Convert2PCL");
	ros::NodeHandle my_node;
	ros::NodeHandle priv_node("~");
	
	ros::Subscriber objectdata_sub;
	std::string name_topic;
	priv_node.param<std::string>("topic", name_topic, "ObjectData");
	
	
	
	objectdata_sub = my_node.subscribe<convert_from_objectdata_to_pcl::ObjectData> ("/model", 1, callback);
	
	
}