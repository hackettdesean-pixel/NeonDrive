#pragma once

#include <iostream>

namespace Neon {

class Logger
{
public:

    template<typename T>
    static void Info(T message)
    {
        std::cout << "[NeonDrive] "
                  << message
                  << std::endl;
    }

};

}
