#ifndef _CHICAGOPIZZA_STORE_H_
#define _CHICAGOPIZZA_STORE_H_
#include "PizzaStore.h"
#include "ChicagoStylePizzas.h"
class ChicagoPizzaStore : public PizzaStore {
private:
    Pizza *createPizza(std::string item) override {
        if (item == "cheese") return new ChicagoStyleCheesePizza();
        else if(item == "veggie") return new ChicagoStyleVeggiePizza();
        else if(item == "clam") return new ChicagoStyleClamPizza();
        else if(item == "pepperoni") return new ChicagoStylePepperoniPizza();
        else return nullptr;
    }
};
#endif