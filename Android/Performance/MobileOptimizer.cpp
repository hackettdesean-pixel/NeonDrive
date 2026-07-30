#include "MobileOptimizer.h"

namespace Neon {


void MobileOptimizer::DetectDevice()
{
    // Detect CPU
    // Detect GPU
    // Detect RAM

    textureQuality = 1;

    renderScale = 80;
}


void MobileOptimizer::ApplyLowMemoryMode()
{
    textureQuality = 0;

    renderScale = 60;
}


int MobileOptimizer::TextureQuality() const
{
    return textureQuality;
}


int MobileOptimizer::RenderScale() const
{
    return renderScale;
}


}
