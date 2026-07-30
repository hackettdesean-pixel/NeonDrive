#pragma once

namespace Neon {

enum class MissionState
{
    Locked,
    Active,
    Completed,
    Failed
};


class Mission
{
public:

    Mission();

    void Start();
    void Complete();
    void Fail();

    MissionState State();

private:

    MissionState state;

};

}
