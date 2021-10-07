#ifndef _WILDTURKEY_H_
#define _WILDTURKEY_H_
#include "Turkey.h"
#include <iostream>
class WildTurkey : public Turkey {
public:
    void gobble() override {
        std::cout << "Gobble gobble\n";
    }
    void fly() override {
        std::cout << "I'm flying a short distance\n";
    }
};
#endif