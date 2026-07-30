add_library(
    NeonVulkan

    Core/VulkanInstance.cpp
    Core/GPUDetector.cpp

    Pipeline/Swapchain.cpp
    Pipeline/CommandBuffer.cpp
    Pipeline/RenderPipeline.cpp

    Mesh/Mesh.cpp

    Memory/GPUBuffer.cpp

    Descriptors/DescriptorManager.cpp

    Objects/RenderObject.cpp
)


target_include_directories(
    NeonVulkan
    PUBLIC
    .
)
