cmake_minimum_required(VERSION 3.20)

project(NeonDrive)


set(CMAKE_CXX_STANDARD 20)


add_subdirectory(Engine)
add_subdirectory(Renderer/Vulkan)
add_subdirectory(Game)
