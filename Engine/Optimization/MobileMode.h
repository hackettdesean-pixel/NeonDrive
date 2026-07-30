#pragma once

namespace Neon {

class MobileMode
{
public:

    static void EnableLowMemoryMode();

    static bool Enabled();

private:

    static inline bool enabled = false;

};

}
