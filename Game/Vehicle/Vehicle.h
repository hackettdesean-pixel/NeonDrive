#pragma once

#include "../../Engine/Physics/RigidBody.h"

namespace Neon {

class Vehicle
{
public:

    Vehicle();

    void Accelerate(float amount);
    void Brake(float amount);

    void Update(float delta);

private:

    RigidBody body;
    float speed;
};

}
