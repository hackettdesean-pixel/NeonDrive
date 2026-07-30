#include "VulkanInstance.h"
#include "../../Engine/Core/Logger.h"

namespace Neon {

VulkanInstance::VulkanInstance()
{
    instance = VK_NULL_HANDLE;
}


VulkanInstance::~VulkanInstance()
{
    Destroy();
}


bool VulkanInstance::Create()
{
    Logger::Info("Creating Vulkan Instance");

    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "NeonDrive";
    appInfo.applicationVersion = VK_MAKE_VERSION(0,1,0);
    appInfo.engineVersion = VK_MAKE_VERSION(0,1,0);
    appInfo.apiVersion = VK_API_VERSION_1_2;


    VkInstanceCreateInfo createInfo{};
    createInfo.sType =
        VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;

    createInfo.pApplicationInfo =
        &appInfo;


    if(vkCreateInstance(
        &createInfo,
        nullptr,
        &instance)
        != VK_SUCCESS)
    {
        Logger::Info("Vulkan Instance Failed");
        return false;
    }


    Logger::Info("Vulkan Instance Created");

    return true;
}


void VulkanInstance::Destroy()
{
    if(instance)
    {
        vkDestroyInstance(
            instance,
            nullptr);

        instance = VK_NULL_HANDLE;
    }
}


VkInstance VulkanInstance::Get() const
{
    return instance;
}

}
