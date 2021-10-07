#ifndef _ChicagoSTYLE_PIZZA_H_
#define _ChicagoSTYLE_PIZZA_H_
#include "Pizza.h"
class ChicagoStyleCheesePizza : public Pizza{
public:
    ChicagoStyleCheesePizza() {
        name = "Chicago Style Deep Dish Cheese Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.push_back("Shredded Mozzarella Cheese");
    }
    // void prepare() override {}
    // void bake() override {}
    void cut() override {
        std::cout << "Cutting the pizza into square slices\n";
    }
    // void box() override {}
};
class ChicagoStyleVeggiePizza : public Pizza{
public:
    // void prepare() override {}
    // void bake() override {}
    // void cut() override {}
    // void box() override {}
};
class ChicagoStyleClamPizza : public Pizza{
public:
    // void prepare() override {}
    // void bake() override {}
    // void cut() override {}
    // void box() override {}
};
class ChicagoStylePepperoniPizza : public Pizza{
public:
    // void prepare() override {}
    // void bake() override {}
    // void cut() override {}
    // void box() override {}
};
#endif