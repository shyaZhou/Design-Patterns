#ifndef _CEILINGFANMediumCOMMAND_H_
#define _CEILINGFANMediumCOMMAND_H_
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanMediumCommand : public Command {
public:
    CeilingFanMediumCommand(CeilingFan *ceilingFan) : 
    Command("CeilingFanMeidumCommand"),
    _ceilingFan(ceilingFan) {}
    void execute() override {
        _prevSpeed = _ceilingFan->getSpeed();
        _ceilingFan->medium();
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