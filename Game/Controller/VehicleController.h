#pragma once

namespace Neon {

class VehicleController
{
public:

    void Accelerate(float value);
    void Steer(float value);

private:

    float throttle = 0;
    float steering = 0;
};

}
