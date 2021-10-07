#ifndef _QUACK_H_
#define _QUACK_H_
#include "QuackBehavior.h"

class Quack: public QuackBehavior {
public:
    Quack();
    ~Quack();
    void quack() override;
};

#endif