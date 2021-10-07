#ifndef _MUTEQUACK_H_
#define _MUTEQUACK_H_
#include "QuackBehavior.h"

class MuteQuack: public QuackBehavior {
public:
    void quack() override;
};
#endif