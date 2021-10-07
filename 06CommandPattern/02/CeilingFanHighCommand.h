#ifndef _CEILINGFANHIGHCOMMAND_H_
#define _CEILINGFANHIGHCOMMAND_H_
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanHighCommand : public Command {
public:
    CeilingFanHighCommand(CeilingFan *ceilingFan) : 
    Command("CeilingFanHighCommand"),
    _ceilingFan(ceilingFan) {}
    void execute() override {
        _prevSpeed = _ceilingFan->getSpeed();
        _ceilingFan->high();
    }
    void undo() override {
        if(_prevSpeed == CeilingFan::HIGH) _ceilingFan->high();
        else if(_prevSpeed == CeilingFan::MEDIUM) _ceilingFan->medium();
        else if(_prevSpeed == CeilingFan::LOW) _ceilingFan->low();
        else if(_prevSpeed == CeilingFan::OFF) _ceilingFan->off();
    }
private:
    CeilingFan *_ceilingFan;
    int _prevSpeed;
};
#endif