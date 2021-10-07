#ifndef _SOLDSTATE_H_
#define _SOLDSTATE_H_
#include <iostream>
#include "State.hpp"
#include "GumballMachine.h"
class SoldState : public State {
public:
    // 通过构造器得到糖果机的引用，然后将它记录在实例变量中
    SoldState(GumballMachine *gumballMachine) :
    _gumballMachine(gumballMachine)
    {
    }
    // 这是一个对此状态不恰当的动作
    void insertQuarter(){ std::cout << "Please wait, we're already giving you a gumball\n"; }
    void ejectQuarter() { std::cout << "Sorry, you already turned the crank\n"; }
    void turnCrank() { std::cout << "Turning twice doesn't get you another gumball!\n"; }
    void dispense() { 
        _gumballMachine->releaseBall();
        if (_gumballMachine->getCount() > 0) _gumballMachine->setState(_gumballMachine->getNoQuarterState());
        else {
            std::cout << "Oops, out of gumballs!\n";
            _gumballMachine->setState(_gumballMachine->getSoldOutState());
        }
    }
private:
    GumballMachine *_gumballMachine;
};
#endif