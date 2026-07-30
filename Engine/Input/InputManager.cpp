#include "InputManager.h"

namespace Neon {


void InputManager::Update()
{
    // Keyboard update
    // Android touch update
}


bool InputManager::IsPressed(int key)
{
    return false;
}


float InputManager::TouchX() const
{
    return touchX;
}


float InputManager::TouchY() const
{
    return touchY;
}


}
