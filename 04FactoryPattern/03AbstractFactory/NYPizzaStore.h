#ifndef _NYPIZZA_H_
#define _NYPIZZA_H_
#include "PizzaStore.h"
#include "PizzaIngredientFactory.h"
#include "NYPizzaIngredientFactory.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
class NYPizzaStore : public PizzaStore {
protected:
    Pizza *createPizza(std::string item) override {
        Pizza *pizza = nullptr;
        PizzaIngredientFactory *ingredientFactory = 
        new NYPizzaIngredientFactory();
        
        if(item == "cheese") {
            pizza = new CheesePizza(ingredientFactory);
            pizza->setName("New York Style Cheese Pizza");
        } else if(item == "veggie") {
            pizza = new VeggiePizza(ingredientFactory);
            pizza->setName("New York Style Veggie Pizza");
        } else if(item == "clam") {
            pizza = new ClamPizza(ingredientFactory);
            pizza->setName("New York Style Clam Pizza");
        } else if(item == "pepperoni") {
            pizza = new PepperoniPizza(ingredientFactory);
            pizza->setName("New York Style Pepperoni Pizza");
        }
        return pizza;
    }
};
#endif