#include "AssetManager.h"

namespace Neon {

bool AssetManager::Load(const std::string& path)
{
    assets.push_back(path);

    return true;
}


void AssetManager::UnloadAll()
{
    assets.clear();
}


bool AssetManager::Exists(const std::string& path)
{
    for(auto& asset : assets)
    {
        if(asset == path)
            return true;
    }

    return false;
}

}
