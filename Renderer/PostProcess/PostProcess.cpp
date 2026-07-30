#include "PostProcess.h"

namespace Neon {


bool PostProcess::Initialize()
{
    // Create post processing resources
    // Bloom
    // Color correction
    // Mobile optimized effects

    enabled = true;

    return true;
}


void PostProcess::Apply()
{
    if(!enabled)
        return;

    // Apply screen effects
}


void PostProcess::Shutdown()
{
    enabled = false;
}


}
