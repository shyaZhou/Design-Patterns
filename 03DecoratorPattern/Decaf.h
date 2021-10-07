#ifndef _DECAF_H_
#define _DECAF_H_
#include "Beverage.h"
class Decaf : public Beverage {
public:
    Decaf() : Beverage("Decaf") {}
    double cost() override { return 1.05; }
};
#endif