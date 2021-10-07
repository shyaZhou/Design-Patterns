#include "GumballMachine.h"
#include <iostream>
#include "SoldOutState.hpp"
#include "NoQuarterState.hpp"
#include "HasQuarterState.hpp"
#include "SoldState.hpp"
#include "WinnerState.hpp"

GumballMachine::GumballMachine(int numberGumballs) : 
    _soldOutState(new SoldOutState(this)),
    _noQuarterState(new NoQuarterState(this)),
    _hasQuarterState(new HasQuarterState(this)),
    _soldState(new SoldState(this)),
    _winnerState(new WinnerState(this)),
    _count(numberGumballs)
{
    if(numberGumballs > 0) _state = _noQuarterState;
}
GumballMachine::~GumballMachine() {
    if(_soldOutState) { delete _soldOutState; _soldOutState = nullptr; }
    if(_noQuarterState) { delete _noQuarterState; _noQuarterState = nullptr; }
    if(_hasQuarterState) { delete _hasQuarterState; _hasQuarterState = nullptr; }
    if(_soldState) { delete _soldState; _soldState = nullptr; }
    _state = nullptr;
}
void GumballMachine::setCount(int count) {
    _count = count;
}

void GumballMachine::setState(State *state) {
    _state = state;
}

int GumballMachine::getCount() {
    return _count;
}

State *GumballMachine::getState() {
    return _state;
}
State *GumballMachine::getHasQuarterState() {
    return _hasQuarterState;
}
State *GumballMachine::getNoQuarterState() {
    return _noQuarterState;
}
State *GumballMachine::getSoldState() {
    return _soldState;
}
State *GumballMachine::getSoldOutState() {
    return _soldOutState;
}
State *GumballMachine::getWinnerState() {
    return _winnerState;
}

// 顾客投钱
void GumballMachine::insertQuarter() {
    _state->insertQuarter();
}

// 顾客试图退钱
void GumballMachine::ejectQuarter() {
    _state->ejectQuarter();
}

// 顾客试图转动曲柄
void GumballMachine::turnCrank() {
    _state->turnCrank();
    _state->dispense();
}

void GumballMachine::releaseBall() {
    std::cout << "A gumball comes rolling out the slot...\n";
    if (_count != 0) --_count;
}