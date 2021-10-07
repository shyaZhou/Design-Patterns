#ifndef _CEILINGFANOFFCOMMAND_H_
#define _CEILINGFANOFFCOMMAND_H_
#include "Command.h"
#include "CeilingFan.h"
class CeilingFanOffCommand : public Command {
public:
    CeilingFanOffCommand(CeilingFan *ceilingFan) : 
    Command("CeilingFanOffCommand"),
    _ceilingFan(ceilingFan) {}
    void execute() override {
        _prevSpeed = _ceilingFan->getSpeed();
        _ceilingFan->off();
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