#pragma once

#include "../../Engine/Math/Vector3.h"

namespace Neon {

class TrafficVehicle
{
public:

    void Spawn(Vector3 location);

    void Update(float delta);


    Vector3 GetPosition() const;


private:

    Vector3 position;

    float speed = 5.0f;

};

}
