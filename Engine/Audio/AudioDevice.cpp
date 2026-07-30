#include "AudioDevice.h"

namespace Neon {

bool AudioDevice::Initialize()
{
    // Audio backend initialization
    // OpenAL / Android Audio / Windows Audio

    return true;
}


void AudioDevice::Shutdown()
{
    // Release audio device
}

}
