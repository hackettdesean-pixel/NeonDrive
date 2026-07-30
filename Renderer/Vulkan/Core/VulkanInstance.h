#pragma once

#include "../Platform/VulkanHeaders.h"

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
