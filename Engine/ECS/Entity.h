#pragma once

#include "../Math/Vector3.h"

namespace Neon {

struct Transform
{
    Vector3 position;
    Vector3 rotation;
    Vector3 scale;

    Transform()
        : position(0,0,0),
          rotation(0,0,0),
          scale(1,1,1)
    {}
};


class Entity
{
public:

    Entity(int id)
        : id(id)
    {}

    int ID() const
    {
        return id;
    }

    Transform transform;

private:

    int id;
};

}
