#pragma once

#include "../Math/Vector3.h"

namespace Neon {

class RigidBody
{
public:

    Vector3 velocity;
    float mass;

    RigidBody()
    {
        velocity = Vector3();
        mass = 1.0f;
    }


    void ApplyForce(Vector3 force)
    {
        velocity = velocity + force;
    }


    void Update(float delta)
    {
        // Physics integration placeholder
    }

};

}
