#pragma once

struct color
{
	float r, g, b, a;

	color operator+(const color& b)
	{
		color Color;
		Color.r = this->r + b.r;
		Color.g = this->g + b.g;
		Color.b = this->b + b.b;
		Color.a = this->a + b.a;
	}
	color operator-(const color& b)
	{
		color Color;
		Color.r = this->r - b.r;
		Color.g = this->g - b.g;
		Color.b = this->b - b.b;
		Color.a = this->a - b.a;
	}
	color operator*(const color& b)
	{
		color Color;
		Color.r = this->r * b.r;
		Color.g = this->g * b.g;
		Color.b = this->b * b.b;
		Color.a = this->a * b.a;
	}
};