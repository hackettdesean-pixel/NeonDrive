#include "GameLoop.h"

#include "../../Game/Player/Player.h"
#include "../../Game/Vehicle/Vehicle.h"
#include "../../Game/World/WorldManager.h"
#include "../../Engine/Audio/AudioManager.h"
#include "../../Engine/Performance/PerformanceProfile.h"


namespace Neon {


void GameLoop::Initialize()
{
    running = true;

    PerformanceProfile::DetectHardware();

}


void GameLoop::Update(float delta)
{
    if(!running)
        return;


    // Player update
    // Vehicle update
    // World streaming
    // Audio update
    // Renderer update

}


void GameLoop::Shutdown()
{
    running = false;
}


}
