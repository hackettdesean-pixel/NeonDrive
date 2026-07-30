#include "Player.h"

namespace Neon {

Player::Player()
{
    position = Vector3(0,0,0);
}


void Player::Update(float delta)
{
    // Movement logic
}


Vector3 Player::Position()
{
    return position;
}

}
