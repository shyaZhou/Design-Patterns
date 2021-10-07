#ifndef _BEVERAGE_TEST_DRIVE_H_
#define _BEVERAGE_TEST_DRIVE_H_
#include "TeaWithHook.h"
#include "CoffeeWithHook.h"
struct BeverageTestDrive {
    static void main(const char **args = nullptr) { 
        TeaWithHook *teaHook = new TeaWithHook();
        CoffeeWithHook *coffeeHook = new CoffeeWithHook();

        std::cout << "\nMaking tea...\n";
        teaHook->prepareRecipe();

        std::cout << "\nMaking coffee...\n";
        coffeeHook->prepareRecipe();
    }
};
#endif