#ifndef _SOLDOUTSTATE_H_
#define _SOLDOUTSTATE_H_
#include <iostream>
#include "State.hpp"
#include "GumballMachine.h"
class SoldOutState : public State {
public:
    // 通过构造器得到糖果机的引用，然后将它记录在实例变量中
    SoldOutState(GumballMachine *gumballMachine) :
    _gumballMachine(gumballMachine)
    {
    }
    // 这是一个对此状态不恰当的动作
    void insertQuarter(){ std::cout << "can't insert Quarter\n"; }
    void ejectQuarter() { std::cout << "can't eject\n"; }
    void turnCrank() { std::cout << "can't turnCrank\n"; }
    void dispense() { std::cout << "can't dispense\n"; }
private:
    GumballMachine *_gumballMachine;
};
#endif