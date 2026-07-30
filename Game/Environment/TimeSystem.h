#pragma once

namespace Neon {

class TimeSystem
{
public:

    void Update(float delta);

    float Hour();

private:

    float hour = 12.0f;
};

}
