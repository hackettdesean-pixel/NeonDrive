#include "VulkanRenderer.h"
#include "../../Engine/Core/Logger.h"

namespace Neon {

VulkanRenderer::VulkanRenderer()
{
    initialized = false;
}


VulkanRenderer::~VulkanRenderer()
{
    Shutdown();
}


bool VulkanRenderer::Initialize()
{
    Logger::Info("Starting Vulkan Renderer");

    // Vulkan instance creation goes here
    // GPU selection goes here
    // Swapchain goes here

    initialized = true;

    Logger::Info("Vulkan Renderer Ready");

    return true;
}


void VulkanRenderer::Shutdown()
{
    if(initialized)
    {
        Logger::Info("Vulkan Renderer Shutdown");
        initialized = false;
    }
}

}
