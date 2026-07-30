#pragma once

namespace Neon {

class Input
{
public:

    static void Update();

    static bool Forward();
    static bool Brake();

private:

    static inline bool forward = false;
    static inline bool brake = false;
};

}
