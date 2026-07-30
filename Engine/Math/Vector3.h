#pragma once

namespace Neon {

struct Vector3
{
    float x;
    float y;
    float z;

    Vector3()
        : x(0), y(0), z(0)
    {}

    Vector3(float X,float Y,float Z)
        : x(X), y(Y), z(Z)
    {}
};

}
