#ifndef _COFFEE_H_
#define _COFFEE_H_
#include <iostream>
#include "CaffeineBeverage.h"
class Coffee : public CaffeineBeverage{
public:
    void brew() override {
        std::cout << "Dripping Coffee through filter\n";
    }
    void addCondiments() override {
        std::cout << "Adding Sugar and Milk\n";
    }
};
#endif