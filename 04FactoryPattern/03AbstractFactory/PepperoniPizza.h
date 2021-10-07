#ifndef _PEPPERONIPIZZA_H_
#define _PEPPERONIPIZZA_H_
#include "Pizza.h"
class PepperoniPizza : public Pizza {
public:
    PepperoniPizza(PizzaIngredientFactory *ingredientFactory) : 
    _ingredientFactory(ingredientFactory)
    {

    }
    void prepare() override {
        std::cout << "Preparing " << name;
        dough = _ingredientFactory->createDough();
        sauce = _ingredientFactory->createSauce();
        cheese = _ingredientFactory->createCheese();
    }
private:
    PizzaIngredientFactory *_ingredientFactory;
};
#endif