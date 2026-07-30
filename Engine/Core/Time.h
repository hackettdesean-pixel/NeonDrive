#pragma once

#include <chrono>

namespace Neon {

class Time
{
public:
    static void Update();

    static float DeltaTime();
    static float FPS();

private:
    static inline std::chrono::high_resolution_clock::time_point lastFrame;
    static inline float delta = 0.0f;
    static inline float fps = 0.0f;
};

}
