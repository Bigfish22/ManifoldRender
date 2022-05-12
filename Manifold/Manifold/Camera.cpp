#include "Camera.h"

Camera::Camera(std::string name, float filmWidth, float filmHeight, float focalLength)
{
        this->name = name;
        this->filmWidth = filmWidth;
        this->filmHeight = filmHeight;
        this->focalLength = focalLength;

        calculateFov();
}

Camera::Camera(float focalLength)
{
        this->name = "Cam";
        this->filmWidth = 36.0f;
        this->filmHeight = 24.0f;
        this->focalLength = focalLength;

        calculateFov();
}

void Camera::SetFilmWidth(float width)
{
        this->filmWidth = width;
        calculateFov();
}
float Camera::GetFilmWidth()
{
        return filmWidth;
}

void Camera::SetFilmHeight(float height)
    {
        this->filmHeight = height;
        calculateFov();
    }
float Camera::GetFilmHeight()
{
        return filmHeight;
}

void Camera::SetFocalLength(float focalLength)
{
        this->focalLength = focalLength;
        calculateFov();
}
float Camera::GetFocalLength()
{
        return focalLength;
}

float Camera::GetFov()
{
        return fov;
}
float Camera::GetHFov()
{
        return hfov;
}
float Camera::GetVFov()
{
        return vfov;
}

void Camera::calculateFov()
{
        float filmDiagonal = sqrtf(pow(filmWidth, 2) + pow(filmHeight, 2));
        fov = (2.0f * atan(filmDiagonal / (2.0f * focalLength))) * 180.0f / PI;
        hfov = (2.0f * atan(filmWidth / (2.0f * focalLength))) * 180.0f / PI;
        vfov = (2.0f * atan(filmHeight / (2.0f * focalLength))) * 180.0f / PI;
}
