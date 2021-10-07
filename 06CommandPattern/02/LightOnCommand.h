#ifndef _LIGHTONCOMMAND_H_
#define _LIGHTONCOMMAND_H_
#include "Command.h"
#include "Light.h"
class LightOnCommand : public Command {
public:
    LightOnCommand(Light *light) : 
    Command("LightOnCommand"),
    _light(light) {}
    void execute() override {
        _light->on();
    }
    void undo() override {
        _light->off();
    }
private:
    Light *_light;
};
#endif