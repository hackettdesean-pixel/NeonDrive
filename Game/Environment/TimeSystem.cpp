#include "TimeSystem.h"

namespace Neon {

void TimeSystem::Update(float delta)
{
    hour += delta * 0.05f;

    if(hour >= 24)
        hour = 0;
}


float TimeSystem::Hour()
{
    return hour;
}

}
