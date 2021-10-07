#ifndef _REMOTECONTROL_TEST_H_
#define _REMOTECONTROL_TEST_H_
#include "SimpleRemoteControl.h"
#include "LightOnCommand.h"
#include "GarageDoorOpenCommand.h"

class RemoteControlTest {
public:
    static void main(const char **args = nullptr) {
        SimpleRemoteControl *remote = new SimpleRemoteControl();
        Light *light = new Light();
        GarageDoor *garageDoor = new GarageDoor();
        LightOnCommand *lightOn = new LightOnCommand(light);
        GarageDoorOpenCommand *garageDoorOpenCommandOpen = new GarageDoorOpenCommand(garageDoor);

        remote->setCommand(lightOn);
        remote->buttonWasPressed();
        remote->setCommand(garageDoorOpenCommandOpen);
        remote->buttonWasPressed();
    }
};
#endif