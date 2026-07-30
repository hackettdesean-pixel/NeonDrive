#include "MobileMode.h"

namespace Neon {

void MobileMode::EnableLowMemoryMode()
{
    enabled = true;
}


bool MobileMode::Enabled()
{
    return enabled;
}

}
