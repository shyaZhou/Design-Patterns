#ifndef _WEATHERDATA_H_
#define _WEATHERDATA_H_
#include <vector>
#include <algorithm>
#include "Subject.h"
#include "Observer.h"
class WeatherData : public Subject {
public:
    WeatherData() :
    observers(new std::vector<Observer*>(0)) 
    { 
    }
    void registerObserver(Observer *o) override{ observers->push_back(o); }
    void removeObserver(Observer *o) override{
    std::vector<Observer *>::iterator _it = std::find(observers->begin(), observers->end(), o) ;
        if(_it != observers->end())
        observers->erase(_it);
    }
    void notifyObserver() override{
        for(int i = 0; i < observers->size(); i++) {
            Observer *observer = static_cast<Observer*>(observers->operator[](i));
            observer->update(_temperature, _humidity, _pressure);
        }
    }
    inline void measurementsChanged() { notifyObserver(); }
    void setMeasurements( float temperature, float humidity, float pressure ){
        _temperature = temperature;
        _humidity = humidity;
        _pressure = pressure;
        measurementsChanged();
        return ;
    }
private:
    std::vector<Observer*> *observers;
    float _temperature;
    float _humidity;
    float _pressure;
};
#endif