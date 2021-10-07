#ifndef _LIGHTOFFCOMMAND_H_
#define _LIGHTOFFCOMMAND_H_
#include "Command.h"
#include "Light.h"
class LightOffCommand : public Command {
public:
    LightOffCommand(Light *light) :
    Command("LightOffCommand"),
    _light(light) {}
    void execute() override {
        _light->off();
    }
    void undo() override {
        _light->on();
    }
private:
    Light *_light;
};
#endif