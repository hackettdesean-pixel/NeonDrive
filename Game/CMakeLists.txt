add_executable(
    NeonDrive

    Main.cpp

    Player/Player.cpp

    Vehicle/Vehicle.cpp
    Vehicle/Physics/VehiclePhysics.cpp

    Controller/VehicleController.cpp
    Controller/CameraController.cpp

    HUD/HUD.cpp

    Missions/Mission.cpp
    Missions/MissionManager.cpp

    Economy/Wallet.cpp

    Progression/PlayerProgression.cpp

    World/WorldManager.cpp

    Traffic/TrafficVehicle.cpp
    Traffic/TrafficManager.cpp
)


target_link_libraries(
    NeonDrive

    NeonEngine
    NeonVulkan
    NeonScene
    NeonPostProcess
)


target_include_directories(
    NeonDrive
    PUBLIC
    .
)
