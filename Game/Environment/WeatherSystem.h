#pragma once

namespace Neon {

enum class Weather
{
    Clear,
    Rain,
    Storm
};


class WeatherSystem
{
public:

    void SetWeather(Weather type);

    Weather Current();

private:

    Weather weather = Weather::Clear;
};

}
