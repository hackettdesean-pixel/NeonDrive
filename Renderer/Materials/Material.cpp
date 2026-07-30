#include "Material.h"

namespace Neon {

Material::Material()
{
    roughness = 0.5f;
    metallic = 0.0f;
}


void Material::SetRoughness(float value)
{
    roughness = value;
}


void Material::SetMetallic(float value)
{
    metallic = value;
}

}
