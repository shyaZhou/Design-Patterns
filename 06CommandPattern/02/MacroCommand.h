#ifndef _MACROCOMMAND_H_
#define _MACROCOMMAND_H_
#include "Command.h"
#include <vector>
class MacroCommand : public Command {
public:
    MacroCommand(const std::vector<Command*> &commands) :
    Command("MacroCommand"),
    _commands(commands)
    {}
    void execute() override {
        for(int i = 0; i < _commands.size(); i++) {
            _commands[i]->execute();
        }
    }
    void undo() override {
        for(int i = 0; i < _commands.size(); i++) {
            _commands[i]->undo();
        }
    }
private:
    std::vector<Command*> _commands;
};
#endif