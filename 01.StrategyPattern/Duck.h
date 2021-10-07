#ifndef _DUCK_H_
#define _DUCK_H_
#include <iostream>
#include "FlyBehavior.h"
#include "QuackBehavior.h"
using namespace std;

class FlyBehavior;
class QuackBehavior;
class Duck{
public:
    Duck();
    virtual ~Duck();
    virtual void display() = 0;
    void performFly();
    void performQuack();
    void setFlyBehavior(FlyBehavior *fb) {
        _flyBehavior = fb;
    }
    void setQuackBehavior(QuackBehavior *qb) {
        _quackBehavior = qb;
    }
    inline void swim(){cout << "All ducks float, even decoys!\n";}
protected:
    FlyBehavior *_flyBehavior;
    QuackBehavior *_quackBehavior;
};
#endif