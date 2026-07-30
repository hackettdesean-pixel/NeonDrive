#pragma once

namespace Neon {

class VulkanRenderer
{
public:

    VulkanRenderer();
    ~VulkanRenderer();

    bool Initialize();
    void Shutdown();

private:

    bool initialized;
};

}
