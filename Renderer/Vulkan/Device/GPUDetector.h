#pragma once

namespace Neon {

class GPUDetector
{
public:

    bool Detect();

    const char* Name();

private:

    const char* gpuName = "Unknown GPU";

};

}
