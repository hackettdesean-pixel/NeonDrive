add_library(
    NeonVulkan

    VulkanRenderer.cpp
    GPUProfile.cpp
)

target_include_directories(
    NeonVulkan
    PUBLIC .
)

add_library(
    NeonVulkanCore

    Core/VulkanInstance.cpp
    Core/GPUDetector.cpp
)

target_include_directories(
    NeonVulkanCore
    PUBLIC Core
)

add_library(
    NeonVulkanPipeline

    Pipeline/Swapchain.cpp
    Pipeline/CommandBuffer.cpp
    Pipeline/RenderPipeline.cpp
)

target_include_directories(
    NeonVulkanPipeline
    PUBLIC Pipeline
)
