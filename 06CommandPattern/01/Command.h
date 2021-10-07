#ifndef _COMMAND_H_
#define _COMMAND_H_
struct Command {
    virtual void execute() = 0;
};
#endif