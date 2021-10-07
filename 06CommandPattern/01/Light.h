#ifndef _LIGHT_H_
#define _LIGHT_H_
#include <iostream>
struct Light{
    void on() {
        std::cout << "Light is On\n";
    }
    void off() {
        std::cout << "Light is Off\n";
    }
};
#endif