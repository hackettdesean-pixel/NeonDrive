#include "TrafficAI.h"

namespace Neon {

TrafficAI::TrafficAI()
{
    position = Vector3();
    target = Vector3();
}


void TrafficAI::SetTarget(Vector3 newTarget)
{
    target = newTarget;
}


void TrafficAI::Update(float delta)
{
    // Vehicle navigation logic
}

}
