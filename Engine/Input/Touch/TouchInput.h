#pragma once

namespace Neon {

class TouchInput
{
public:

    static void Update();

    static float Steering();
    static float Throttle();

private:

    static inline float steering = 0;
    static inline float throttle = 0;

};

}
