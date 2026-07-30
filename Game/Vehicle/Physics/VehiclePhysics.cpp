#include "VehiclePhysics.h"

namespace Neon {


void VehiclePhysics::Accelerate(float amount)
{
    speed += amount;
}


void VehiclePhysics::Brake(float amount)
{
    speed -= amount;

    if(speed < 0)
        speed = 0;
}


void VehiclePhysics::Update(float delta)
{
    velocity = Vector3(
        0,
        0,
        speed
    );

    position += velocity * delta;
}


Vector3 VehiclePhysics::Position() const
{
    return position;
}


}
