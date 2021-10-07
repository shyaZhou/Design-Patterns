#ifndef _CHICAGOPIZZASTORE_H_
#define _CHICAGOPIZZASTORE_H_
#include "PizzaStore.h"
#include "ChicagoIngredientFactory.h"
#include "CheesePizza.h"
#include "VeggiePizza.h"
#include "ClamPizza.h"
#include "PepperoniPizza.h"
class ChicagoPizzaStore : public PizzaStore {
protected:
    Pizza *createPizza(std::string item) override {
        Pizza *pizza = nullptr;
        PizzaIngredientFactory *ingredientFactory = 
        new ChicagoIngredientFactory();
        
        if(item == "cheese") {
            pizza = new CheesePizza(ingredientFactory);
            pizza->setName("Chicago Style Cheese Pizza");
        } else if(item == "veggie") {
            pizza = new VeggiePizza(ingredientFactory);
            pizza->setName("Chicago Style Veggie Pizza");
        } else if(item == "clam") {
            pizza = new ClamPizza(ingredientFactory);
            pizza->setName("Chicago Style Clam Pizza");
        } else if(item == "pepperoni") {
            pizza = new PepperoniPizza(ingredientFactory);
            pizza->setName("Chicago Style Pepperoni Pizza");
        }
        return pizza;
    }
};
#endif