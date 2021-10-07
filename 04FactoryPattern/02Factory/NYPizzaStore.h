#ifndef _NYPIZZA_H_
#define _NYPIZZA_H_
#include "PizzaStore.h"
#include "NYStylePizzas.h"
class NYPizzaStore : public PizzaStore {
private:
    Pizza *createPizza(std::string item) override {
        if (item == "cheese") return new NYStyleCheesePizza();
        else if(item == "veggie") return new NYStyleVeggiePizza();
        else if(item == "clam") return new NYStyleClamPizza();
        else if(item == "pepperoni") return new NYStylePepperoniPizza();
        else return nullptr;
    }
};
#endif