#pragma once

#include "../../Engine/Math/Vector3.h"

namespace Neon {

class Light
{
public:

    void SetPosition(Vector3 pos);
    void SetIntensity(float value);

private:

    Vector3 position;
    float intensity =
cat > Renderer/Lighting/Light.h <<'EOF'
#pragma once

#include "../../Engine/Math/Vector3.h"

namespace Neon {

class Light
{
public:

    void SetPosition(Vector3 pos);
    void SetIntensity(float value);

private:

    Vector3 position;
    float intensity = 1.0f;

};

}

