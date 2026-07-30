#include "PlayerProgression.h"

namespace Neon {

void PlayerProgression::AddXP(int value)
{
    xp += value;

    if(xp >= 1000)
    {
        level++;
        xp = 0;
    }
}


int PlayerProgression::Level()
{
    return level;
}


int PlayerProgression::XP()
{
    return xp;
}

}
