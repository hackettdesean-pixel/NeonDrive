#pragma once

namespace Neon {

class PostProcess
{
public:

    bool Initialize();

    void Apply();

    void Shutdown();


private:

    bool enabled = true;

};

}
