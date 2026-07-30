#pragma once

#include <vector>

namespace Neon {

class RenderObject;

class SceneRenderer
{
public:

    bool Initialize();

    void Add(RenderObject* object);

    void Render();

    void Clear();


private:

    std::vector<RenderObject*> objects;

};

}
