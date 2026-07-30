#include "PerformanceStats.h"

namespace Neon {

void PerformanceStats::Update(float fps)
{
    currentFPS = fps;
}


float PerformanceStats::FPS()
{
    return currentFPS;
}

}
