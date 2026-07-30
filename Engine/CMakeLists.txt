add_library(
    NeonEngine

    Core/Application.cpp
    Core/Time.cpp
)

target_include_directories(
    NeonEngine
    PUBLIC Core
)
