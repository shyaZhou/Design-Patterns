#ifndef _WHIP_H_
#define _WHIP_H_
#include "CondimentDecorator.h"
#include "Beverage.h"
class Whip : public CondimentDecorator {
public:
    Whip(Beverage *beverage) : _beverage(beverage){}
    const std::string getDescription() const override { return (_beverage->getDescription() + ", Whip"); }
    double cost() override { return .10 + _beverage->cost(); }
private:
    Beverage *_beverage;
};
#endif