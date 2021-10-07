#ifndef _COFFEE_WITHHOOK_H_
#define _COFFEE_WITHHOOK_H_
#include <iostream>
#include <string>
#include <algorithm>
#include "CaffeineBeverageWithHook.h"
class CoffeeWithHook : public CaffeineBeverageWithHook{
public:
    void brew() override {
        std::cout << "Dripping Coffee through filter\n";
    }
    void addCondiments() override {
        std::cout << "Adding Sugar and Milk\n";
    }
    bool customerWantsCondiments() override {
        std::string answer = getUserInput();

        std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        if(CaffeineBeverageWithHook::startswith(answer, "y")) return true;
        else return false;
    }
private:
    std::string getUserInput() {
        std::string answer;
        std::cout << "Would you like milk and sugar with your coffee (y/n)? \n";
        std::cin >> answer;
        return answer;
    }
};
#endif