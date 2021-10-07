#ifndef _PIZZA_H_
#define _PIZZA_H_
#include <string>
#include <vector>
#include <iostream>
#include <thread>
#include <mutex>
#include "Materials.h"
struct Pizza {
    std::string name;
    Dough *dough;
    Sauce *sauce;
    std::vector<Veggies*> veggies;
    Cheese *cheese;
    Pepperoni *pepperoni;
    Clams *clam;

    virtual void prepare() = 0;
    virtual void bake(){
        std::cout << "bake for 25 minutes at 350\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    virtual void cut(){
        std::cout << "Cutting the pizza intto diagonal slices\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    virtual void box(){
        std::cout << "Place pizza in official PizzaStore box\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    void setName(const std::string& name) {
        this->name = name;
    }
    std::string getName() { return name; }
    std::string toString() {
        return std::string();
    }
};
#endif