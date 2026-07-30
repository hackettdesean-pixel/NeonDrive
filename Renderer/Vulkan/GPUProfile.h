#pragma once

namespace Neon {

enum class GraphicsProfile
{
    Low,
    Medium,
    High,
    Ultra
};


class GPUProfile
{
public:

    static GraphicsProfile Detect();
};

}
