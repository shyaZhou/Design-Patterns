#ifndef _WEATHERSTATION_H_
#define _WEATHERSTATION_H_
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "StatisticsDisplay.h"
class WeatherStation {
public:
    static void main(const char *args[] = nullptr) {
        WeatherData *weatherData = new WeatherData();
        CurrentConditionDisplay *currentDisplay = new CurrentConditionDisplay(weatherData);
        StatisticsDisplay *statisticsDisplay = new StatisticsDisplay(weatherData);

        weatherData->setMeasurements(80, 65, 30.4f);
        weatherData->setMeasurements(82, 70, 29.2f);
        weatherData->setMeasurements(78, 90, 29.2f);
    }
};
#endif