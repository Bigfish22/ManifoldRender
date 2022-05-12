#pragma once
#include "vector3.h"
//Todo: flesh out what a transform class would actually need.

struct quaternion
{
	float x, y, z, w;
};

class MTransform
{
	vector3 position;
	quaternion rotation;
	vector3 scale;
};