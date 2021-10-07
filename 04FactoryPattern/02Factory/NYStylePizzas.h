#ifndef _NYSTYLE_PIZZA_H_
#define _NYSTYLE_PIZZA_H_
#include "Pizza.h"
class NYStyleCheesePizza : public Pizza{
public:
    NYStyleCheesePizza()
    {
        name = "NY Style Sauce and Cheese Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinar Sauce";
        toppings.push_back("Grated Reggiano Cheese");
    }
    // void prepare() override {}
    // void bake() override {}
    // void cut() override {}
    // void box() override {}
};
class NYStyleVeggiePizza : public Pizza{
public:
    // void prepare() override {}
    // void bake() override {}
    // void cut() override {}
    // void box() override {}
};
class NYStyleClamPizza : public Pizza{
public:
    // void prepare() override {}
    // void bake() override {}
    // void cut() override {}
    // void box() override {}
};
class NYStylePepperoniPizza : public Pizza{
public:
    // void prepare() override {}
    // void bake() override {}
    // void cut() override {}
    // void box() override {}
};
#endif