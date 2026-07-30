#include "DeviceProfile.h"

namespace Neon {

DeviceTier DeviceProfile::Detect()
{
    // Real CPU/GPU/RAM detection
    // will connect with Vulkan later

    return DeviceTier::Low;
}

}
