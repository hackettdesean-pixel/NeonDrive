#pragma once

namespace Neon {

enum class Quality
{
    Low,
    Medium,
    High
};


class GraphicsProfile
{
public:

    static Quality Detect()
    {
        // Hardware detection will use Vulkan later
        return Quality::Low;
    }

};

}
