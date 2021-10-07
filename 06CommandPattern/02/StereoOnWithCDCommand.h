#ifndef _STEREO_ON_WITH_COMMAND_H_
#define _STEREO_ON_WITH_COMMAND_H_
#include "Command.h"
#include "Stereo.h"
class StereoOnWithCDCommand : public Command {
public:
    StereoOnWithCDCommand(Stereo *stereo) : 
    Command("StereoOnWithCDCommand"),
    _stereo(stereo){}
    void execute() override {
        _preVolume = _stereo->getVolume();
        _stereo->on();
        _stereo->setCD();
        _stereo->setVolume(11);
    }
    void undo() override {
        _stereo->setVolume(_preVolume);
        _stereo->resetCD();
        _stereo->off();
    }
private:
    Stereo *_stereo;
    int _preVolume;
    int _preCDState;
};
#endif