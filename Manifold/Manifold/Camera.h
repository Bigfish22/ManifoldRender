#pragma once
#include <iostream>
#include "MNode.h"
#include "MTransform.h"
#include <math.h>

#define PI 3.14159265f

class Camera :
    public MNode
{
public:
    MTransform Transform;

private:
    float filmWidth;
    float filmHeight;
    float focalLength;

    float fov;
    float hfov;
    float vfov;

public:
    Camera(std::string name = "Cam", float filmWidth = 36.0f, float filmHeight = 24.0f, float focalLength = 50.0f);

    Camera(float focalLength = 50.0);

    //set and get values to force read only and to update fov as the camera settings shift.
    void SetFilmWidth(float width);

    float GetFilmWidth();

    void SetFilmHeight(float height);

    float GetFilmHeight();

    void SetFocalLength(float focalLength);

    float GetFocalLength();

    float GetFov();

    float GetHFov();

    float GetVFov();


private:
    void calculateFov();
};