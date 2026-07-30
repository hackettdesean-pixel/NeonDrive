#include "Vehicle.h"
#include "../../Engine/Core/Logger.h"

namespace Neon {

Vehicle::Vehicle()
{
    speed = 0;
}


void Vehicle::Accelerate(float amount)
{
    speed += amount;
}


void Vehicle::Brake(float amount)
{
    speed -= amount;

    if(speed < 0)
        speed = 0;
}


void Vehicle::Update(float delta)
{
    body.Update(delta);
}

}
