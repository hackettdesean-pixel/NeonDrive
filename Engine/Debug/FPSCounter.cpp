#include "FPSCounter.h"

namespace Neon {

void FPSCounter::Update(float delta)
{
    if(delta > 0)
        fps = 1.0f / delta;
}


float FPSCounter::GetFPS()
{
    return fps;
}

}
