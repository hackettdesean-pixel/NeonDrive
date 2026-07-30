#include "TrafficVehicle.h"

namespace Neon {


void TrafficVehicle::Spawn(Vector3 location)
{
    position = location;
}


void TrafficVehicle::Update(float delta)
{
    position.z += speed * delta;
}


Vector3 TrafficVehicle::GetPosition() const
{
    return position;
}


}
