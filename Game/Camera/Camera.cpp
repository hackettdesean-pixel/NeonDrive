#include "Camera.h"
#include "../../Engine/Core/Logger.h"


namespace Neon {

Camera::Camera()
{
    mode = CameraMode::ThirdPerson;
    position = Vector3(0,2,5);
}


void Camera::SetMode(CameraMode newMode)
{
    mode = newMode;

    if(mode == CameraMode::FirstPerson)
        Logger::Info("First Person Camera");

    else
        Logger::Info("Third Person Camera");
}


void Camera::Move(Vector3 newPosition)
{
    position = position + newPosition;
}


Vector3 Camera::Position()
{
    return position;
}

}
