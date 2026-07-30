#pragma once

namespace Neon {

class GameLoop
{
public:

    void Initialize();
    void Update(float delta);
    void Shutdown();

private:

    bool running = false;

};

}
