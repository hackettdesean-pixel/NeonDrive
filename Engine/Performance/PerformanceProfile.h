#pragma once

namespace Neon {

enum class QualityPreset
{
    Battery,
    Low,
    Medium,
    High,
    Ultra
};


class PerformanceProfile
{
public:

    static void DetectHardware();

    static QualityPreset Current();

    static float ResolutionScale();

    static int TargetFPS();

private:

    static inline QualityPreset preset = QualityPreset::Low;
    static inline float resolution = 0.75f;
    static inline int fps = 30;

};

}
