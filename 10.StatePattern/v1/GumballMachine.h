#ifndef _GUMBALL_MACHINE_H_
#define _GUMBALL_MACHINE_H_
#include <iostream>
#include <string>
class GumballMachine {
public:
    GumballMachine(int count);
    std::string getLocation();
    int getCount();
    int getState();
    void insertQuarter();
    // 顾客试图退钱
    void ejectQuater();
    // 顾客试图转动曲柄
    void turnCrank();
    // 发放糖果
    void dispense();
private:
    std::string _location;
    const static int SOLD_OUT = 0;
    const static int NO_QUARTER = 1;
    const static int HAS_QUARTER = 2;
    const static int SOLD = 3;

    int _state = SOLD_OUT;
    int _count = 0;
};
#endif