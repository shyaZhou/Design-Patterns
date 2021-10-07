#ifndef _SOY_H_
#define _SOY_H_
#include "CondimentDecorator.h"
#include "Beverage.h"
class Soy : public CondimentDecorator {
public:
    Soy(Beverage *beverage) : _beverage(beverage){}
    const std::string getDescription() const override { return (_beverage->getDescription() + ", Soy"); }
    double cost() override { 
        double cost = _beverage->cost();
    }
private:
    Beverage *_beverage;
};
#endif