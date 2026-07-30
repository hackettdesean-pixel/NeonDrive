#include "WorldManager.h"

namespace Neon {


bool WorldManager::LoadWorld(const std::string& name)
{
    zones.push_back(name);

    // World streaming foundation
    // Load nearby zones
    // Prepare terrain
    // Spawn objects

    return true;
}


void WorldManager::Update(float delta)
{
    // Stream world chunks
    // Update loaded zones
}


void WorldManager::Unload()
{
    zones.clear();
}


}
