#include "PerformanceProfile.h"

namespace Neon {


void PerformanceProfile::DetectHardware()
{
    /*
        Future:
        - CPU core detection
        - RAM detection
        - Vulkan GPU properties
        - Android device model

        CAT S42 target:
        Low preset
        720p
        30 FPS
    */

    preset = QualityPreset::Low;
    resolution = 0.75f;
    fps = 30;
}


QualityPreset PerformanceProfile::Current()
{
    return preset;
}


float PerformanceProfile::ResolutionScale()
{
    return resolution;
}


int PerformanceProfile::TargetFPS()
{
    return fps;
}


}
