#pragma once

#include <vector>

namespace Neon {

struct Vertex
{
    float x;
    float y;
    float z;

    float u;
    float v;
};


class Model
{
public:

    bool Load(const char* path);

    const std::vector<Vertex>& Vertices() const;


private:

    std::vector<Vertex> vertices;

};

}
