#ifndef _HASQUATERSTATE_H_
#define _HASQUATERSTATE_H_
#include <iostream>
#include "State.hpp"
#include "GumballMachine.h"
#include <cstdlib>
#include <ctime>
#include <random>
class HasQuarterState : public State {
public:
    // std::srand(std::time(0));
    // 通过构造器得到糖果机的引用，然后将它记录在实例变量中
    HasQuarterState(GumballMachine *gumballMachine) :
    _gumballMachine(gumballMachine)
    {
    }
    // 这是一个对此状态不恰当的动作
    void insertQuarter(){ std::cout << "You can't insert another quarter\n"; }
    void ejectQuarter() { 
        std::cout << "Quarter returned\n";
        _gumballMachine->setState(_gumballMachine->getNoQuarterState());
    }
    void turnCrank() { 
        std::cout << "You turned...\n";
        int winner = std::rand() % 10;
        if((winner == 0) && (_gumballMachine->getCount() > 1)) _gumballMachine->setState(_gumballMachine->getWinnerState());
        else _gumballMachine->setState(_gumballMachine->getSoldState());   
    }
    void dispense() { std::cout << "No gumball dispensed\n"; }
private:
    GumballMachine *_gumballMachine;
};
#endif