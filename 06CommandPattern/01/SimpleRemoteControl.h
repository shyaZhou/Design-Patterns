#ifndef _SIMPLEREMOTECONTROL_H_
#define _SIMPLEREMOTECONTROL_H_
#include "Command.h"
class SimpleRemoteControl {
public:
    SimpleRemoteControl(){}
    void setCommand(Command *command) { _slot = command; }
    void buttonWasPressed() { _slot->execute(); }
private:
    Command *_slot;
};
#endif