#pragma once

namespace Neon {

enum class MobileQuality
{
    UltraLow,
    Low,
    Medium,
    High
};


class MobileProfile
{
public:

    static MobileQuality Detect();

};

}
