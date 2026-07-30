#pragma once

namespace Neon {

class FPSCounter
{
public:

    void Update(float delta);

    float GetFPS();

private:

    float fps = 0;

};

}
