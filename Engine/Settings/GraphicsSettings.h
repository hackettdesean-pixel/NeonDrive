#pragma once

namespace Neon {

class GraphicsSettings
{
public:

    static void SetQuality(int level);

    static int Quality();

private:

    static inline int quality = 1;

};

}
