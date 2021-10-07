#ifndef _GUMBALL_MACHINE_H_
#define _GUMBALL_MACHINE_H_
#include <iostream>
#include <string>
#include "State.hpp"
class GumballMachine {
public:
    GumballMachine(int numberGumballs);
    ~GumballMachine();
    std::string getLocation();
    int getCount();
    void insertQuarter();
    // 顾客试图退钱
    void ejectQuarter();
    // 顾客试图转动曲柄
    void turnCrank();
    void setState(State*);
    void setCount(int);
    State *getState();
    State *getHasQuarterState();
    State *getNoQuarterState();
    State *getSoldState();
    State *getSoldOutState();
    State *getWinnerState();
    void releaseBall();

private:
    State *_soldOutState;
    State *_noQuarterState;
    State *_hasQuarterState;
    State *_soldState;
    State *_winnerState;

    State *_state = _soldOutState;
    int _count = 0;

};
#endif