#include "Camera.h"

namespace Neon {

void Camera::SetPosition(Vector3 pos)
{
    position = pos;
}


Matrix4 Camera::View()
{
    return Matrix4();
}


Matrix4 Camera::Projection()
{
    return Matrix4();
}

}
