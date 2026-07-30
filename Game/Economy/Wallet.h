#pragma once

namespace Neon {

class Wallet
{
public:

    void AddMoney(int amount);
    bool SpendMoney(int amount);

    int Balance();

private:

    int money = 0;

};

}
