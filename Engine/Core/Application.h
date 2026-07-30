#pragma once

namespace Neon {

class Application {
public:
    Application();
    ~Application();

    void Run();

private:
    bool running;
};

}
