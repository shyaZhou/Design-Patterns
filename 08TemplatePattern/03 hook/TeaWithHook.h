#ifndef _TEA_WITHHOOK_H_
#define _TEA_WITHHOOK_H_
#include <iostream>
#include <string>
#include <algorithm>
#include "CaffeineBeverageWithHook.h"
class TeaWithHook : public CaffeineBeverageWithHook {
public:
    void brew() override {
        std::cout << "Steeping the tea\n";
    }
    void addCondiments() override {
        std::cout << "Adding Lemon\n";
    }
    bool customerWantsCondiments() override{
        std::string answer = getUserInput();
        std::transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        if(CaffeineBeverageWithHook::startswith(answer, "y")) return true;
        else return false;
    }
private:
    std::string getUserInput() {
        std::string answer;
        std::cout << "Would you like lemon with your tea (y/n)? \n";
        std::cin >> answer;
        return answer;
    }
};
#endif