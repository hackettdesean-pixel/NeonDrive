#pragma once

#include "TrafficVehicle.h"
#include <vector>

namespace Neon {

class TrafficManager
{
public:

    void Spawn();

    void Update(float delta);


private:

    std::vector<TrafficVehicle> vehicles;

};

}
