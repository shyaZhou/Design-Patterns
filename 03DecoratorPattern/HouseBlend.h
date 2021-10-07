#ifndef _HOUSEBLEND_H_
#define _HOUSEBLEND_H_
#include "Beverage.h"
class HouseBlend : public Beverage {
public:
    HouseBlend(): Beverage("House Blend Coffee"){}
    double cost() override { return .89; }
};
#endif