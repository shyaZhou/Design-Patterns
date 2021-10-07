#ifndef _CAFFEINE_BEVERAGE_H_
#define _CAFFEINE_BEVERAGE_H_
#include <iostream>
class CaffeineBeverage {
public:
    virtual void prepareRecipe() final {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
    void boilWater() {
        std::cout << "Boiling water\n";
    }
    void pourInCup() {
        std::cout << "Pouring into cup\n";
    }
};
#endif