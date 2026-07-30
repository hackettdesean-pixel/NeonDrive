#pragma once

#include "../Mesh/Mesh.h"

namespace Neon {

class RenderObject
{
public:

    void Draw();

private:

    Mesh mesh;

};

}
