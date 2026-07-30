#pragma once

namespace Neon {

class InputManager
{
public:

    void Update();

    bool IsPressed(int key);


    float TouchX() const;

    float TouchY() const;


private:

    float touchX = 0.0f;

    float touchY = 0.0f;

};

}
