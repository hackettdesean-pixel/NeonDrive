#include "GPUDetector.h"
#include "../../../Engine/Core/Logger.h"


namespace Neon {

void GPUDetector::Scan(VkInstance instance)
{
    uint32_t count = 0;

    vkEnumeratePhysicalDevices(
        instance,
        &count,
        nullptr);


    if(count == 0)
    {
        Logger::Info("No Vulkan GPU Found");
        return;
    }


    Logger::Info("Vulkan GPU Detected");
}

}
