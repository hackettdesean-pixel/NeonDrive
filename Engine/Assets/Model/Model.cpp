#include "Model.h"

namespace Neon {


bool Model::Load(const char* path)
{
    // Model loader foundation
    // Future:
    // - glTF
    // - OBJ
    // - compressed mobile assets

    vertices =
    {
        { -1.0f, -1.0f, 0.0f, 0.0f, 0.0f },
        {  1.0f, -1.0f, 0.0f, 1.0f, 0.0f },
        {  0.0f,  1.0f, 0.0f, 0.5f, 1.0f }
    };


    return true;
}


const std::vector<Vertex>& Model::Vertices() const
{
    return vertices;
}


}
