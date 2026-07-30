#pragma once

#include "Mission.h"

namespace Neon {

class MissionManager
{
public:

    void LoadMissions();
    void Update(float delta);

private:

    Mission current;

};

}
