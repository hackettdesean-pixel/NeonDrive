#pragma once

#include "../../Engine/Math/Vector3.h"

namespace Neon {

class TrafficAI
{
public:

    TrafficAI();

    void Update(float delta);

    void SetTarget(Vector3 target);

private:

    Vector3 target;
    Vector3 position;
};

}
