#include "GraphicsSettings.h"

namespace Neon {

void GraphicsSettings::SetQuality(int level)
{
    quality = level;
}


int GraphicsSettings::Quality()
{
    return quality;
}

}
