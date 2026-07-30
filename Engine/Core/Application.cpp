#include "Application.h"
#include <iostream>

namespace Neon
{

Application::Application()
{
    running = true;
}

Application::~Application()
{
}

void Application::Run()
{
    std::cout << "NeonDrive Engine Started\n";

    while (running)
    {
        // Main game loop
        // Renderer, physics, input will go here

        running = false;
    }
}

}
