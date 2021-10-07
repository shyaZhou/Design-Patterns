#include "MallardDuck.h"
#include "Quack.h"
#include "FlyWithWings.h"
#include <iostream>

MallardDuck::MallardDuck(): Duck() {
    _quackBehavior = new Quack();
    _flyBehavior = new FlyWithWings();
}

void MallardDuck::display() {
    std::cout << "I'm a real Mallard duck\n";
}