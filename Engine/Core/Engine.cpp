#include "Engine.h"

namespace Neon {


bool Engine::Start()
{
    loop.Initialize();

    return true;
}


void Engine::Run()
{
    float delta = 0.016f;


    for(int i = 0; i < 1; i++)
    {
        loop.Update(delta);
    }

}


void Engine::Stop()
{
    loop.Shutdown();
}


}
