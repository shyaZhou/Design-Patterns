#ifndef _ESPRESSO_H_
#define _ESPRESSO_H_
#include "Beverage.h"
class Espresso : public Beverage {
public:
    Espresso() : Beverage("Espresso") {}
    double cost() override { return 1.99; }
};
#endif