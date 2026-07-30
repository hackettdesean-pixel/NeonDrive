#include "MobileProfile.h"

namespace Neon {

MobileQuality MobileProfile::Detect()
{
    /*
        CAT S42 style target:

        ARM CPU
        integrated/mobile GPU
        limited RAM

        Use:
        - lower texture memory
        - dynamic
        - dynamic resolution
        - reduced shadows
    */

    return MobileQuality::Low;
}

}
