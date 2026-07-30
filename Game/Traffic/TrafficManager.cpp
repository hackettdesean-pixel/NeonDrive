#include "TrafficManager.h"

namespace Neon {


void TrafficManager::Spawn()
{
    TrafficVehicle car;

    car.Spawn(
        Vector3(0,0,0)
    );

    vehicles.push_back(car);
}


void TrafficManager::Update(float delta)
{
    for(auto& vehicle : vehicles)
    {
        vehicle.Update(delta);
    }
}


}
