#pragma once
#include "vector2.h"
#include "Vector3.h"

namespace Manifold {

	static float dot(const vector3& a, const vector3& b)
	{
		return a.x * b.x + a.y * b.y + a.z * b.z;
	}

	static float dot(const vector2& a, const vector2& b)
	{
		return a.x * b.x + a.y * b.y;
	}

}