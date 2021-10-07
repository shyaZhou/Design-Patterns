#ifndef _NOCOMMAND_H_
#define _NOCOMMAND_H_
#include "Command.h"
class NoCommand : public Command {
public :
    NoCommand() : Command("NoCommand"){}
    void execute() override {}
    void undo() override {}
};
#endif