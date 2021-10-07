#ifndef _SQUEAK_H_
#define _SQUEAK_H_
#include "QuackBehavior.h"

class Squeak: public QuackBehavior {
public:
    Squeak();
    ~Squeak();
    void quack() override;
};
#endif