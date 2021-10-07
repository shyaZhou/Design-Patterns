#ifndef _PIZZA_H_
#define _PIZZA_H_
#include <string>
#include <vector>
#include <iostream>
#include <thread>
#include <mutex>
struct Pizza {
    std::string getName() { return name; }
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings ;
    virtual void prepare(){
        std::cout << "Preparing " << name << std::endl; 
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "Tossing dough...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "Adding sauce...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "Adding toppings: ";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        for(int i = 0; i < toppings.size(); i++) {
            std::cout<< " " << toppings[i] <<std::endl;
        }
    }
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
};
#endif