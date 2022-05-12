#pragma once
#include <iostream>
#include "Camera.h"
#include "Vector2.h"
#include "Vector3.h"
#include "MMath.h"
#include "FrameBuffer.h"

void main()
{
	Camera camA = Camera(80.0f);

	std::cout << "Focal Length: " << camA.GetFocalLength() << "\n";
	std::cout << "Fov: " << camA.GetFov() << "\n";
	std::cout << "HFov: " << camA.GetHFov() << "\n";
	std::cout << "VFov: " << camA.GetVFov() << "\n";

	camA.SetFocalLength(50.0f);

	std::cout << "Focal Length: " << camA.GetFocalLength() << "\n";
	std::cout << "Fov: " << camA.GetFov() << "\n";
	std::cout << "HFov: " << camA.GetHFov() << "\n";
	std::cout << "VFov: " << camA.GetVFov() << "\n";

	camA.SetFocalLength(35.0f);

	std::cout << "Focal Length: " << camA.GetFocalLength() << "\n";
	std::cout << "Fov: " << camA.GetFov() << "\n";
	std::cout << "HFov: " << camA.GetHFov() << "\n";
	std::cout << "VFov: " << camA.GetVFov() << "\n";

	vector3 positionA;
	vector3 positionB;
	vector3 positionC;

	positionA = vector3(10.0f, 5.0f, 3.0f);
	positionB = vector3(10.0f, 5.0f, 10.0f);

	positionC = positionA + positionB;
	std::cout << "Vector3 math: x " << positionC.x << " y " << positionC.y << " z " << positionC.z << "\n";

	positionC = positionC * 10.0f;
	std::cout << "Vector3 math: x " << positionC.x << " y " << positionC.y << " z " << positionC.z << "\n";

	frameBuffer tempBuffer = frameBuffer(1024, 1024);
}