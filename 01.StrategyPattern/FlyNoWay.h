#ifndef _FLYNOWAY_H_
#define _FLYNOWAY_H_
#include "FlyBehavior.h"
class FlyNoWay : public FlyBehavior {
public:
    FlyNoWay();
    ~FlyNoWay();
    void fly() override;
};
#endif