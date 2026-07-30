#pragma once

namespace Neon {

class CityGrid
{
public:

    CityGrid();

    void Generate(int width,int height);

    int Buildings();

private:

    int buildings;
};

}
