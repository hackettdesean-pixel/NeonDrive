#include "Mission.h"

namespace Neon {

Mission::Mission()
{
    state = MissionState::Locked;
}


void Mission::Start()
{
    state = MissionState::Active;
}


void Mission::Complete()
{
    state = MissionState::Completed;
}


void Mission::Fail()
{
    state = MissionState::Failed;
}


MissionState Mission::State()
{
    return state;
}

}
