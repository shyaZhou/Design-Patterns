#ifndef _STATISTICSDISPLAY_H_
#define _STATISTICSDISPLAY_H_
#include "Subject.h"
#include <iostream>
#include "Observer.h"
#include "DisplayElement.h"
class StatisticsDisplay : public Observer, public DisplayElement
{
public:
    StatisticsDisplay(Subject *weatherData) : 
    _weatherData(weatherData)
    {
        _weatherData->registerObserver(this);
    }
    void update(float temperature, float humidity, float pressure) override{
        _temperature = temperature;
        _humidity = humidity;
        display();
    }
    void display() override{
        std::cout << "Avg/Max/Min temperature = " << _temperature << "/" << _temperature << "/" << _temperature <<"\n";
    }
private:
    float _temperature;
    float _humidity;
    Subject *_weatherData;
};
#endif