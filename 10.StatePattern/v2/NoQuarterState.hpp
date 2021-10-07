#ifndef _NOQUARTERSTATE_H_
#define _NOQUARTERSTATE_H_
#include <iostream>
#include "State.hpp"
#include "GumballMachine.h"
class NoQuarterState : public State {
public:
    // 通过构造器得到糖果机的引用，然后将它记录在实例变量中
    NoQuarterState(GumballMachine *gumballMachine) :
    _gumballMachine(gumballMachine)
    {
    }
    // 如果有人投了25分钱我们就打印出一条信息，说我们接受了25分钱，然后改编辑器的状态到HasQuaterState
    void insertQuarter(){ _gumballMachine->setState(_gumballMachine->getHasQuarterState()); }
    void ejectQuarter() { std::cout << "You haven't inserted a quarter\n"; }
    void turnCrank() { std::cout << "You turned, but there's no quarter\n"; }
    void dispense() { std::cout << "You need to pay first\n"; }
private:
    GumballMachine *_gumballMachine;
};
#endif