#pragma once

#include "../../Engine/Math/Vector3.h"
#include "../../Engine/Math/Matrix4.h"

namespace Neon {

class Camera
{
public:

    void SetPosition(Vector3 pos);

    Matrix4 View();
    Matrix4 Projection();

private:

    Vector3 position;

};

}
