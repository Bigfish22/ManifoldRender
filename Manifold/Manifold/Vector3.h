#pragma once
//basic vector 3 implementation

struct vector3
{
	float x, y, z;

	vector3()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}
	vector3(float x, float y, float z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}


	// all the operators
	vector3 operator+(const vector3& b)
	{
		vector3 Vector3;
		Vector3.x = this->x + b.x;
		Vector3.y = this->y + b.y;
		Vector3.z = this->z + b.z;
		return Vector3;
	}

	vector3 operator-(const vector3& b)
	{
		vector3 Vector3;
		Vector3.x = this->x - b.x;
		Vector3.y = this->y - b.y;
		Vector3.z = this->z - b.z;
		return Vector3;
	}

	vector3 operator*(const vector3& b)
	{
		vector3 Vector3;
		Vector3.x = this->x * b.x;
		Vector3.y = this->y * b.y;
		Vector3.z = this->z * b.z;
		return Vector3;
	}

	vector3 operator+(const float& b)
	{
		vector3 Vector3;
		Vector3.x = this->x + b;
		Vector3.y = this->y + b;
		Vector3.z = this->z + b;
		return Vector3;
	}

	vector3 operator-(const float& b)
	{
		vector3 Vector3;
		Vector3.x = this->x - b;
		Vector3.y = this->y - b;
		Vector3.z = this->z - b;
		return Vector3;
	}

	vector3 operator*(const float& b)
	{
		vector3 Vector3;
		Vector3.x = this->x * b;
		Vector3.y = this->y * b;
		Vector3.z = this->z * b;
		return Vector3;
	}

};