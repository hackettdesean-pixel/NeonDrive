#pragma once

#include "Sound.h"

namespace Neon {

class AudioManager
{
public:

    void Update(float delta);

    void PlayMusic();
    void PlayVehicleSound();

private:

    Sound music;
    Sound vehicle;

};

}
