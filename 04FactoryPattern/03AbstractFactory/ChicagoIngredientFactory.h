#ifndef _CHICAGOINGREDIENTFACTORY_H_
#define _CHICAGOINGREDIENTFACTORY_H_
#include "PizzaIngredientFactory.h"
class ChicagoIngredientFactory : public PizzaIngredientFactory {
public:
    Dough *createDough() override {
        return new ThinCrustDough();
    }
    Sauce *createSauce() override {
        return new PlumPotatoSauce();
    };
    Cheese *createCheese() override {
        return new MozzarellaCheese();
    }
    std::vector<Veggies*> createVeggies() override {
        Veggies *veggies[2]={ new Eggplant(),
        new BlackOlive };
        std::vector<Veggies *>res(veggies, veggies+2);
        return res;
    }
    Pepperoni *createPepperoni() override {
        return new SlicedPepperoni();
    }
    Clams *createClam() override{
        return new FrozenClams();
    }
};
#endif