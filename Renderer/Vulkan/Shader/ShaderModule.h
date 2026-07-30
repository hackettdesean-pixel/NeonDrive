#pragma once

namespace Neon {

class ShaderModule
{
public:

    bool Load(const char* path);
    void Destroy();

};

}
