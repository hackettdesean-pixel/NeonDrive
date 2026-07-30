#include "AudioManager.h"

namespace Neon {

void AudioManager::Update(float delta)
{
    // Update 3D audio positions
}


void AudioManager::PlayMusic()
{
    music.Play();
}


void AudioManager::PlayVehicleSound()
{
    vehicle.Play();
}

}
