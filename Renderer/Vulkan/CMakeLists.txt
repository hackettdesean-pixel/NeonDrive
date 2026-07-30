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
