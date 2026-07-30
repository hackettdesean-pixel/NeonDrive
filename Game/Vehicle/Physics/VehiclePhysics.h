#pragma once

#include "../../../Engine/Math/Vector3.h"

namespace Neon {

class VehiclePhysics
{
public:

    void Accelerate(float amount);

    void Brake(float amount);

    void Update(float delta);


    Vector3 Position() const;


private:

    Vector3 position;

    Vector3 velocity;

    float speed = 0.0f;

};

}
