#pragma once

#include <string>

namespace Neon {

class Logger
{
public:

    static void Info(const std::string& message);
    static void Error(const std::string& message);

};

}
