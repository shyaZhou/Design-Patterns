#ifndef _TEA_H_
#define _TEA_H_
#include <iostream>
#include "CaffeineBeverage.h"
class Tea : public CaffeineBeverage {
public:
    void brew() override {
        std::cout << "Steeping the tea\n";
    }
    void addCondiments() override {
        std::cout << "Adding Lemon\n";
    }
private:
};
#endif