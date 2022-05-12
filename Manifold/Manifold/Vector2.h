#pragma once
//basic vector 2 implementation

struct vector2
{
	float x, y;

	vector2 operator+(const vector2& b)
	{
		vector2 Vector2;
		Vector2.x = this->x + b.x;
		Vector2.y = this->y + b.y;
		return Vector2;
	}

	vector2 operator*(const vector2& b)
	{
		vector2 Vector2;
		Vector2.x = this->x * b.x;
		Vector2.y = this->y * b.y;
		return Vector2;
	}

	vector2 operator-(const vector2& b)
	{
		vector2 Vector2;
		Vector2.x = this->x - b.x;
		Vector2.y = this->y - b.y;
		return Vector2;
	}
};