#pragma once
#include "color.h"

struct frameBuffer
{
	int bufferWidth, bufferHeight;
	
	void* pixelBuff;

	frameBuffer(int Width, int Height)
	{
		this->bufferWidth = Width;
		this->bufferHeight = Height;

		int bufferSize = Width * Height;

		color* pixelColor = new color[bufferSize];
		pixelBuff = &pixelColor;
	}
};