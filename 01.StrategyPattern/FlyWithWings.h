#ifndef _FLYWITHWINGS_H_
#define _FLYWITHWINGS_H_
#include "FlyBehavior.h"
class FlyWithWings : public FlyBehavior {
public:
    FlyWithWings();
    ~FlyWithWings();
    void fly() override;
};
#endif