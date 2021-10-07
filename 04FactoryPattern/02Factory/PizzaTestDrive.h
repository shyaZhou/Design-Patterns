#ifndef _PIZZA_TEST_DRIVE_H_
#define _PIZZA_TEST_DRIVE_H_
#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"
struct PizzaTestDrive {
    static void main(const char **args = nullptr) {
        PizzaStore *nyStore = new NYPizzaStore();
        PizzaStore *chicagoStore = new ChicagoPizzaStore();

        Pizza *pizza = nyStore->orderPizza("cheese");
        std::cout << "Ethan ordered a " << pizza->getName() << std::endl;
        
        pizza = chicagoStore->orderPizza("cheese");
        std::cout << "Joel ordered a " << pizza->getName() << std::endl;
    }
};
#endif