#pragma once

namespace Neon {

struct Matrix4
{
    float data[16];

    Matrix4()
    {
        for(int i=0;i<16;i++)
            data[i]=0;
    }

};

}
