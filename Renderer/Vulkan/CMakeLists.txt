add_library(
    NeonVulkan

    VulkanRenderer.cpp
    GPUProfile.cpp
)

target_include_directories(
    NeonVulkan
    PUBLIC .
)
