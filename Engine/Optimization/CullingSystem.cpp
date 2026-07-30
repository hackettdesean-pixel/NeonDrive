#include "CullingSystem.h"

namespace Neon {

bool CullingSystem::Visible(float distance)
{
    return distance < 500.0f;
}

}
