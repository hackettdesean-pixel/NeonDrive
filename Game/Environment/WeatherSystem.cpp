#include "WeatherSystem.h"

namespace Neon {

void WeatherSystem::SetWeather(Weather type)
{
    weather = type;
}


Weather WeatherSystem::Current()
{
    return weather;
}

}
