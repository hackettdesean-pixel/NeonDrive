#include "GPUProfile.h"

namespace Neon {

GraphicsProfile GPUProfile::Detect()
{
    // Temporary detection system
    // Real Vulkan GPU queries come later

    return GraphicsProfile::Low;
}

}
