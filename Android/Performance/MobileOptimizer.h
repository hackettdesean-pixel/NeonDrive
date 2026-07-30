#pragma once

namespace Neon {

class MobileOptimizer
{
public:

    void DetectDevice();

    void ApplyLowMemoryMode();

    int TextureQuality() const;

    int RenderScale() const;


private:

    int textureQuality = 1;

    int renderScale = 100;

};

}
