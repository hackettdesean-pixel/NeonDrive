cmake_minimum_required(VERSION 3.20)

project(NeonDrive)
option(NEON_NO_VULKAN "Disable Vulkan headers" ON)

if(NEON_NO_VULKAN)
    add_compile_definitions(NEON_NO_VULKAN)
endif()

set(CMAKE_CXX_STANDARD 20)


add_subdirectory(Engine)
add_subdirectory(Renderer/Vulkan)
add_subdirectory(Game)
