#include "Application.h"
#include <iostream>

namespace Neon {

Application::Application()
{
    running = true;
}

Application::~Application()
{
}

void Application::Run()
{
    std::cout << "NeonDrive Engine Booted\n";

    while(running)
    {
        // Main loop
        // Input
        // Physics
        // Rendering

        running = false;
    }
}

}
