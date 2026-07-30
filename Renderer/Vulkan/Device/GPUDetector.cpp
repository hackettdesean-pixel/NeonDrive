#include "GPUDetector.h"

namespace Neon {

bool GPUDetector::Detect()
{
    // Vulkan physical device detection

    gpuName = "Mobile Vulkan GPU";

    return true;
}


const char* GPUDetector::Name()
{
    return gpuName;
}

}
