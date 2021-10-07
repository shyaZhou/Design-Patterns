#ifndef _PIZZAINGREDIENTFACTORY_H_
#define _PIZZAINGREDIENTFACTORY_H_
#include "Materials.h"
#include <vector>
struct PizzaIngredientFactory
{
    virtual Dough *createDough() = 0;
    virtual Sauce *createSauce() = 0;
    virtual Cheese *createCheese() = 0;
    virtual std::vector<Veggies*> createVeggies() = 0;
    virtual Pepperoni *createPepperoni() = 0;
    virtual Clams *createClam() = 0;
};

#endif
