#ifndef _GARAGEDOOROPEN_COMMAND_H_
#define _GARAGEDOOROPEN_COMMAND_H_
#include "Command.h"
#include "GarageDoor.h"
class GarageDoorOpenCommand : public Command {
public:
    GarageDoorOpenCommand(GarageDoor *garageDoor) : _garageDoor(garageDoor){}
    void execute() override {
        _garageDoor->open();
    }
private:
    GarageDoor *_garageDoor;
};
#endif