#ifndef _CURRENTCONDITIONDISPLAY_H_
#define _CURRENTCONDITIONDISPLAY_H_
#include "Subject.h"
#include <iostream>
#include "Observer.h"
#include "DisplayElement.h"
class CurrentConditionDisplay : public Observer, public DisplayElement
{
public:
    CurrentConditionDisplay(Subject *weatherData) : 
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
        std::cout << "Current conditions: " << _temperature << "F degrees and " << _humidity << "% humidity\n";
    }
private:
    float _temperature;
    float _humidity;
    Subject *_weatherData;
};
#endif