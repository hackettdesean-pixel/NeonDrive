#include "MemoryManager.h"

namespace Neon {

void MemoryManager::SetMemoryBudget(int megabytes)
{
    memoryBudget = megabytes;
}


int MemoryManager::Budget()
{
    return memoryBudget;
}

}
