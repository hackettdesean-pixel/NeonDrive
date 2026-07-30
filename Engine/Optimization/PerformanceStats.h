#pragma once

namespace Neon {

class PerformanceStats
{
public:

    void Update(float fps);

    float FPS();

private:

    float currentFPS = 0;

};

}
