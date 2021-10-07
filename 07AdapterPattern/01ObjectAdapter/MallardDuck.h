#ifndef _MALLARDDUCK_H_
#define _MALLARDDUCK_H_
#include "Duck.h"
#include <iostream>
class MallardDuck : public Duck {
public:
    void quack() override {
        std::cout << "Quack\n"; 
    }
    void fly() override {
        std::cout << "I'm flying\n";
    }
};
#endif