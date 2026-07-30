#pragma once

#include "../../Engine/Math/Vector3.h"

namespace Neon {

class Player
{
public:

    Player();

    void Update(float delta);

    Vector3 Position();

private:

    Vector3 position;
};

}
