#pragma once

namespace Neon {

class MemoryManager
{
public:

    static void SetMemoryBudget(int megabytes);

    static int Budget();

private:

    static inline int memoryBudget = 512;

};

}
