#pragma once

namespace Neon {

class GameConfig
{
public:

    static void Load();
    static void Save();

    static int Width();
    static int Height();

private:

    static inline int width = 1280;
    static inline int height = 720;

};

}
