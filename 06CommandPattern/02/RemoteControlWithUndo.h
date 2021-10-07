#ifndef _REMOTECONTROL_WITHUNDO_H_
#define _REMOTECONTROL_WITHUNDO_H_
#include "NoCommand.h"
#include <iostream>
#include <string>
#include <vector>
#include <stack>
class RemoteControlWithUndo {
friend std::ostream &operator<<(std::ostream &os, const RemoteControlWithUndo *remoteControl);
public:
    RemoteControlWithUndo() : 
    _noCommand(new NoCommand()),
    _onCommands(std::vector<Command*>(7, _noCommand)),
    _offCommands(std::vector<Command*>(7, _noCommand)),
    // _undoCommand(_noCommand),
    _undoStack(std::stack<Command*>())
    {}
    void setCommand(int slot, Command *onCommand, Command *offCommand) {
        _onCommands[slot] = onCommand;
        _offCommands[slot] = offCommand;
        return ;
    }
    void onButtonWasPushed(int slot) {
        _onCommands[slot]->execute();
        // _undoCommand = _onCommands[slot];
        _undoStack.push(_onCommands[slot]);
    }
    void offButtonWasPushed(int slot) {
        _offCommands[slot]->execute();
        // _undoCommand = _offCommands[slot];
        _undoStack.push(_offCommands[slot]);
    }
    void undoButtonWasPushed() {
        // _undoCommand->undo();
        _undoStack.top()->undo();
        _undoStack.pop();
    }
private:
    NoCommand *_noCommand;
    std::vector<Command*> _onCommands;
    std::vector<Command*> _offCommands;
    // Command *_undoCommand;
    std::stack<Command*> _undoStack;
};

std::ostream &operator<<(std::ostream &os, const RemoteControlWithUndo *remoteControl) {
    std::string stringBuff;
    stringBuff += "\n------ Remote Control ------\n";
    for (int i = 0; i < remoteControl->_onCommands.size(); i++) {
        stringBuff+="[slot " + std::to_string(i) + "] " + remoteControl->_onCommands[i]->getName() + "                 " + remoteControl->_offCommands[i]->getName() + "\n";
    }
    os<<stringBuff;
    return os;
}
#endif