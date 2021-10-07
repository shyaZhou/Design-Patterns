#ifndef _CAFFEINE_BEVERAGE_WITHHOOK_H_
#define _CAFFEINE_BEVERAGE_WITHHOOK_H_
#include <iostream>
#include <string>
#include <algorithm>
class CaffeineBeverageWithHook {
public:
    static bool startswith (const std::string &str, const std::string &start) {
        return str.find(start) == 0 ? true : false;
    }
    virtual void prepareRecipe() final {
        boilWater();
        brew();
        pourInCup();
        if(customerWantsCondiments()) addCondiments();
    }
    virtual void brew() = 0;
    virtual void addCondiments() = 0;
    virtual void boilWater() {
        std::cout << "Boiling water\n";
    }
    virtual void pourInCup() {
        std::cout << "Pouring into cup\n";
    }
    virtual bool customerWantsCondiments() { // hook
        return true;
    }
};
#endif