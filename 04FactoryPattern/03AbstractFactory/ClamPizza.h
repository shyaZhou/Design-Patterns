#ifndef _CLAMPIZZA_H_
#define _CLAMPIZZA_H_
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class ClamPizza : public Pizza {
public:
    ClamPizza(PizzaIngredientFactory *ingredientFactory) : 
    _ingredientFactory(ingredientFactory)
    {

    }
    void prepare() override {
        std::cout << "Preparing " << name;
        dough = _ingredientFactory->createDough();
        sauce = _ingredientFactory->createSauce();
        cheese = _ingredientFactory->createCheese();
        clam = _ingredientFactory->createClam();
    }
private:
    PizzaIngredientFactory *_ingredientFactory;
};
#endif