#include "DynamicResolution.h"

namespace Neon {


void DynamicResolution::Update(float frameTime)
{
    if(frameTime > 0.033f)
    {
        scale -= 0.05f;
    }
    else
    {
        scale += 0.02f;
    }


    if(scale < 0.5f)
        scale = 0.5f;


    if(scale > 1.0f)
        scale = 1.0f;
}


float DynamicResolution::Scale()
{
    return scale;
}


}
