add_library(
    NeonEngine

    Core/Application.cpp
    Core/Engine.cpp
    Core/GameLoop.cpp

    Debug/Logger.cpp
    Debug/FPSCounter.cpp

    Config/GameConfig.cpp

    Settings/GraphicsSettings.cpp

    Audio/AudioDevice.cpp
    Audio/Sound.cpp
    Audio/AudioManager.cpp

    Performance/PerformanceProfile.cpp
    Performance/DynamicResolution.cpp
    Performance/ThreadManager.cpp

    Optimization/MemoryManager.cpp
    Optimization/CullingSystem.cpp
    Optimization/LODStreamer.cpp
    Optimization/MobileMode.cpp
)


target_include_directories(
    NeonEngine
    PUBLIC
    .
)
