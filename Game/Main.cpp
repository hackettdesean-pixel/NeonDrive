#include "../Engine/Core/Engine.h"


int main()
{

    Neon::Engine engine;


    if(engine.Start())
    {
        engine.Run();
    }


    engine.Stop();


    return 0;
}
