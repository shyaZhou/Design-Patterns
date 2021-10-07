#ifndef _COMMAND_H_
#define _COMMAND_H_
#include <string>
struct Command {
    Command(){}
    Command(const std::string &name) : _name(name){}
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual const std::string getName() { return _name; }
private:
    const std::string _name = "Command";
};
#endif