#pragma once

#include "../../Engine/Math/Vector3.h"

namespace Neon {

enum class CameraMode
{
    FirstPerson,
    ThirdPerson
};


class Camera
{
public:

    Camera();

    void SetMode(CameraMode mode);

    void Move(Vector3 position);

    Vector3 Position();

private:

    Vector3 position;

    CameraMode mode;
};

}
