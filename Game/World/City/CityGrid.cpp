#include "CityGrid.h"

namespace Neon {

CityGrid::CityGrid()
{
    buildings = 0;
}


void CityGrid::Generate(int width,int height)
{
    buildings = width * height;
}


int CityGrid::Buildings()
{
    return buildings;
}

}
