cmake_minimum_required(VERSION 3.20)

project(NeonDrive)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Engine)
add_subdirectory(Game)cmake_minimum_required(VERSION 3.20)

project(NeonDrive
    VERSION 0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(Engine)
add_subdirectory(Game)
