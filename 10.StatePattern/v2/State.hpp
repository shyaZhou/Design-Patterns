#ifndef _STATE_H_
#define _STATE_H_
struct State {
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
    virtual ~State(){};
};
#endif