#pragma once

#include <vulkan/vulkan.h>

namespace Neon {

class VulkanInstance
{
public:

    VulkanInstance();
    ~VulkanInstance();

    bool Create();
    void Destroy();

    VkInstance Get() const;

private:

    VkInstance instance;
};

}
