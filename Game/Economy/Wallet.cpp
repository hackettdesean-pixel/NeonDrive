#include "Wallet.h"

namespace Neon {

void Wallet::AddMoney(int amount)
{
    money += amount;
}


bool Wallet::SpendMoney(int amount)
{
    if(money >= amount)
    {
        money -= amount;
        return true;
    }

    return false;
}


int Wallet::Balance()
{
    return money;
}

}
