#pragma once

namespace Neon {

class Sound
{
public:

    bool Load();
    void Play();
    void Stop();

private:

    bool playing = false;

};

}
