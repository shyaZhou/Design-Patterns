#ifndef _PIZZA_SORE_H
#define _PIZZA_SORE_H
#include "SimplePizzaFactory.h"
#include <string>
class PizzaStore {
public:
    PizzaStore(SimplePizzaFactory *facotry) :
    _factory(facotry)
    {

    }
    Pizza *orderPizza(std::string type) {
        Pizza *pizza;
        pizza = _factory->createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
private:
    SimplePizzaFactory *_factory;
};
#endif