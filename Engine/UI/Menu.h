#pragma once

namespace Neon {

class Menu
{
public:

    void Open();
    void Close();

    bool IsOpen();

private:

    bool opened = false;

};

}
