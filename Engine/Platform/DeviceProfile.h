#pragma once

namespace Neon {

enum class DeviceTier
{
    Low,
    Medium,
    High
};


class DeviceProfile
{
public:

    static DeviceTier Detect();

};

}
