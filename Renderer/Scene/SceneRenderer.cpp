#include "SceneRenderer.h"

namespace Neon {


bool SceneRenderer::Initialize()
{
    // Create renderer resources
    // Prepare frame data

    return true;
}


void SceneRenderer::Add(RenderObject* object)
{
    objects.push_back(object);
}


void SceneRenderer::Render()
{
    for(auto object : objects)
    {
        if(object)
        {
            // Draw render object
        }
    }
}


void SceneRenderer::Clear()
{
    objects.clear();
}


}
