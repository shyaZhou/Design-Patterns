#ifndef _STEREO_OFF_WITH_COMMAND_H_
#define _STEREO_OFF_WITH_COMMAND_H_
#include "Command.h"
#include "Stereo.h"
class StereoOffWithCDCommand : public Command {
public:
    StereoOffWithCDCommand(Stereo *stereo) :
    Command("StereoOffWithCDCommand"),
    _stereo(stereo){}
    void execute() override {
        _stereo->off();
    }
    void undo() override {
        _stereo->on();
    }
private:
    Stereo *_stereo;
};
#endif