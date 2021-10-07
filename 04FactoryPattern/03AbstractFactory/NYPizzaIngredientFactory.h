#ifndef _NYPIZZAINGREDIENTFACTORY_H_
#define _NYPIZZAINGREDIENTFACTORY_H_
#include "PizzaIngredientFactory.h"
class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    Dough *createDough() override {
        return new ThinCrustDough();
    }
    Sauce *createSauce() override {
        return new MarinaraSauce();
    }
    Cheese *createCheese() override { 
        return new ReggianoCheese();
    }
    std::vector<Veggies*> createVeggies() override {
        Veggies *veggies[4] = {new Garlic(), new Onion(), new Mushroom(), new RedPepper()};
        std::vector<Veggies*> res(veggies, veggies + 4);
        return res;
    }
    Pepperoni *createPepperoni() override {
        return new SlicedPepperoni();
    }
    Clams *createClam() override{
        return new FreshClams();
    }
};
#endif