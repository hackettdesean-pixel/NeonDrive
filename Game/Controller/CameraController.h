#pragma once

namespace Neon {

class CameraController
{
public:

    void FollowPlayer();

    void SwitchView();

private:

    bool firstPerson = false;
};

}
