#include "MiniDuckSimulator.h"

void MiniDuckSimulator::main(const char *args) {
    Duck *mallard = new MallardDuck();
    mallard->performQuack();
    mallard->performFly();
    return ;
}