#pragma once

namespace Neon {

class DynamicResolution
{
public:

    void Update(float frameTime);

    float Scale();

private:

    float scale = 0.75f;

};

}
