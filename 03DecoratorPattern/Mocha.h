#ifndef _MOCHA_H_
#define _MOCHA_H_
#include "CondimentDecorator.h"
#include "Beverage.h"
class Mocha : public CondimentDecorator {
public:
    Mocha(Beverage *beverage) : _beverage(beverage){}
    const std::string getDescription() const override { return (_beverage->getDescription() + ", Mocha" ); }
    double cost() override { return .20 + _beverage->cost(); }
private:
    Beverage *_beverage;
};
#endif