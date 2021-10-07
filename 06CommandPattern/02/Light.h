#ifndef _LIGHT_H_
#define _LIGHT_H_
#include <iostream>
#include <string>
struct Light{
    Light(const std::string &name) : _name(name) {}
    void on() {
        std::cout <<_name << ": Light is On\n";
    }
    void off() {
        std::cout <<_name << ": Light is Off\n";
    }
private:
    const std::string _name;
};
#endif