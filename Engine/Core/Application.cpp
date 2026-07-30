#include "Application.h"
#include "Time.h"
#include "Logger.h"

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
    Logger::Info("NeonDrive Engine Started");

    int frames = 0;

    while(running)
    {
        Time::Update();

        // Input system
        // Physics system
        // Renderer system

        frames++;

        if(frames >= 5)
        {
            Logger::Info("Main loop running");
            running = false;
        }
    }

}

}
