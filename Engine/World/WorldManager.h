#pragma once

#include <vector>
#include <string>

namespace Neon {

class WorldManager
{
public:

    bool LoadWorld(const std::string& name);

    void Update(float delta);

    void Unload();


private:

    std::vector<std::string> zones;

};

}
