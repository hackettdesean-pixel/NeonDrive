#include "Sound.h"

namespace Neon {

bool Sound::Load()
{
    // Load compressed audio file

    return true;
}


void Sound::Play()
{
    playing = true;
}


void Sound::Stop()
{
    playing = false;
}

}
