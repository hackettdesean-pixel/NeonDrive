#pragma once

#include <string>
#include <vector>

namespace Neon {

class AssetManager
{
public:

    bool Load(const std::string& path);

    void UnloadAll();

    bool Exists(const std::string& path);


private:

    std::vector<std::string> assets;

};

}
