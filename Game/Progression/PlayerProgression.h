#pragma once

namespace Neon {

class PlayerProgression
{
public:

    void AddXP(int value);

    int Level();
    int XP();

private:

    int xp = 0;
    int level = 1;

};

}
