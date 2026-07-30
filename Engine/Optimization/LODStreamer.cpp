#include "LODStreamer.h"

namespace Neon {

int LODStreamer::SelectLOD(float distance)
{
    if(distance < 50)
        return 0;

    if(distance < 250)
        return 1;

    return 2;
}

}
