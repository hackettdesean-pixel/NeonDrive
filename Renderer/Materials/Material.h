#pragma once

namespace Neon {

class Material
{
public:

    Material();

    void SetRoughness(float value);
    void SetMetallic(float value);

private:

    float roughness;
    float metallic;
};

}
