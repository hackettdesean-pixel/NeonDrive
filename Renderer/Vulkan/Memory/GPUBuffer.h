#pragma once

#include <cstddef>

namespace Neon {

class GPUBuffer
{
public:

    bool Create(std::size_t size);
    void Destroy();

};

}
