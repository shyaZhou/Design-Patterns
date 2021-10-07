#ifndef _TURKEY_ADAPTER_H_
#define _TURKEY_ADAPTER_H_
#include "Duck.h"
#include "Turkey.h"
class TurkeyAdapter : public Duck {
public:
    TurkeyAdapter(Turkey *turkey) : _turkey(turkey) {}
    void quack() override{
        _turkey->gobble();
    }
    void fly() override {
        for(int i = 0; i < 5; i++) {
            _turkey->fly();
        }
    }
private:
    Turkey *_turkey;
};
#endif