#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"

Duck::Duck(){}
Duck::~Duck(){}
void Duck::performFly() {
    this->_flyBehavior->fly();
}
void Duck::performQuack() {
    this->_quackBehavior->quack();
}
