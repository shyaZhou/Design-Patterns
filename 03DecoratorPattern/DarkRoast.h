#ifndef _DARKROAST_H_
#define _DARKROAST_H_
#include "Beverage.h"
class DarkRoast : public Beverage {
public:
    DarkRoast() : Beverage("DarkRoast") {}
    double cost() override { return 0.99; }
};
#endif