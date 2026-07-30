#include "VehicleController.h"

namespace Neon {

void VehicleController::Accelerate(float value)
{
    throttle = value;
}


void VehicleController::Steer(float value)
{
    steering = value;
}

}
