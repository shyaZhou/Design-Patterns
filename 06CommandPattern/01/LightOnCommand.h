#ifndef _LIGHTCOMMAND_H_
#define _LIGHTCOMMAND_H_
#include "Command.h"
#include "Light.h"
class LightOnCommand : public Command {
public:
    LightOnCommand(Light *light) : _light(light) {}
    void execute() override {
        _light->on();
    }
private:
    Light *_light;
};
#endif