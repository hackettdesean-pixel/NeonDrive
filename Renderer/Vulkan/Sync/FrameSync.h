#pragma once

namespace Neon {

class FrameSync
{
public:

    bool Create();
    void Wait();
    void Signal();
    void Destroy();

};

}
