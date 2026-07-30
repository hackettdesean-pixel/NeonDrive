add_library(
    NeonScene

    Camera.cpp
    SceneRenderer.cpp
)


target_include_directories(
    NeonScene
    PUBLIC
    .
)
