#pragma once

namespace Neon {

class HUD
{
public:

    void Update(float delta);
    void Draw();

    void SetSpeed(float value);

private:

    float speed = 0;

};

}
