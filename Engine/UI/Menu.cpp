#include "Menu.h"

namespace Neon {

void Menu::Open()
{
    opened = true;
}


void Menu::Close()
{
    opened = false;
}


bool Menu::IsOpen()
{
    return opened;
}

}
