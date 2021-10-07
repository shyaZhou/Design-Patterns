#include "GumballMachine.h"
#include <iostream>

GumballMachine::GumballMachine(int count) {
    if(count > 0) _state = NO_QUARTER;
}

std::string GumballMachine::getLocation() {
    return _location;
}

int GumballMachine::getCount() {
    return _count;
}

int GumballMachine::getState() {
    return _state;
}

// 顾客投钱
void GumballMachine::insertQuarter() {
    if (_state == HAS_QUARTER) std::cout << "You can't insert another quater\n"; // 没25分钱
    else if (_state == NO_QUARTER) { // 有25分钱
        _state = HAS_QUARTER;
        std::cout << "You inserted a quater\n";
    } else if (_state == SOLD_OUT) std::cout << "You can't insert a quarter, the machine is sold out\n"; //糖果售罄就拒绝收钱
    else if (_state == SOLD) std::cout << "Please wait, we're already giving you a gumball\n"; // 顾客如果刚买了糖果就需要稍等一下，好让状态转换完毕，恢复到没有25分钱的状态
}

// 顾客试图退钱
void GumballMachine::ejectQuater() {
    if (_state == HAS_QUARTER) { // 有25分钱，就把钱退出来，回到“没有25分钱”的状态
        std::cout << "Quarter returned\n";
        _state = NO_QUARTER;
    } else if (_state == NO_QUARTER) std::cout << "You haven't inserted a quarter\n"; // 没有25分钱的话自然是不会退钱的
    else if (_state == SOLD) std::cout << "Sorry, you already turned the crank\n"; // 如果顾客已经转动曲柄，就不能再退钱了，他已经拿到糖果了
    else if(_state == SOLD_OUT) std::cout << "You can't eject, you haven't inserted a quarter yet\n"; // 如果糖果售罄，就不可能接受25分钱，当然也不可能退钱
}

// 顾客试图转动曲柄
void GumballMachine::turnCrank() {
    if (_state == SOLD) std::cout << "Turning twice doesn't get you another gumball!\n"; // 别想骗过机器拿两次糖果
    else if (_state == NO_QUARTER) std::cout << "You turned but here's no quarter\n"; // 我们需要先投入25分钱
    else if (_state == SOLD_OUT) std::cout << "you turned, but there are no gumballs\n"; // 没有任何糖果了
    else if(_state == HAS_QUARTER) { // 成功，顾客拿到糖果了。改变状态到“售出糖果”， 然后调用机器的dispense()方法。
        std::cout << "You turned...\n";
        _state = SOLD;
        dispense();
    }
}

// dispense
void GumballMachine::dispense() {
    if (_state == SOLD) {
        std::cout << "A gumball comes rolling out the slot\n"; // 正在“售出糖果状态”， 给顾客糖果。
        --_count;
        // 在这里处理“糖果售罄”的情况。如果这是最后一颗糖果，我们就将机器的状态设置到“糖果售罄”；否则就回到“没有25分钱”状态。
        if(_count == 0) { 
            std::cout << "Oops, out of gumballs!\n";
            _state = SOLD_OUT;
        } else _state = NO_QUARTER; 
    } else if (_state == NO_QUARTER) std::cout << "You need to pay first\n"; // 不该发生，但如果顾客这么做了，他们的道德是错误消息而不是得到糖果
    else if (_state == SOLD_OUT) std::cout << "No gumball dispensed\n"; // 不该发生，但如果顾客这么做了，他们的道德是错误消息而不是得到糖果
    else if(_state == HAS_QUARTER) std::cout << "No gumball dispensed\n"; // 不该发生，但如果顾客这么做了，他们的道德是错误消息而不是得到糖果
}