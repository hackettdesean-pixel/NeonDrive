#include "Time.h"

namespace Neon {

void Time::Update()
{
    auto current = std::chrono::high_resolution_clock::now();

    if(lastFrame.time_since_epoch().count() != 0)
    {
        delta =
        std::chrono::duration<float>(
            current - lastFrame
        ).count();

        if(delta > 0)
            fps = 1.0f / delta;
    }

    lastFrame = current;
}


float Time::DeltaTime()
{
    return delta;
}


float Time::FPS()
{
    return fps;
}

}
