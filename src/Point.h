#pragma once
#include <Eigen/Dense>

struct Point
{
	bool valid;
	bool pickedForRANSAC;
	Eigen::Vector2d pos;
	float range;
	float angle;
};