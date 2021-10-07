#ifndef _VEGGIEPIZZA_H_
#define _VEGGIEPIZZA_H_
#include "Pizza.h"
class VeggiePizza : public Pizza {
public:
    VeggiePizza(PizzaIngredientFactory *ingredientFactory) : 
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