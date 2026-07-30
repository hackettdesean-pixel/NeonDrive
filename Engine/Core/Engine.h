#pragma once

#include "GameLoop.h"

namespace Neon {

class Engine
{
public:

    bool Start();
    void Run();
    void Stop();

private:

    GameLoop loop;

};

}
