#ifndef _PIZZA_STORE_H_
#define _PIZZA_STORE_H_
#include <string>
#include "Pizza.h"
struct PizzaStore {
public:
    Pizza *orderPizza(std::string type) {
        Pizza *pizza;
        pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
private:
    virtual Pizza *createPizza(std::string type) = 0;
};
#endif