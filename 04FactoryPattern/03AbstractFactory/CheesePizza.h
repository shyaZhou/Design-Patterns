#ifndef _CHEESEPIZZA_H_
#define _CHEESEPIZZA_H_
#include "Pizza.h"
#include "PizzaIngredientFactory.h"
class CheesePizza : public Pizza {
public:
    CheesePizza(PizzaIngredientFactory *ingredientFactory) : 
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