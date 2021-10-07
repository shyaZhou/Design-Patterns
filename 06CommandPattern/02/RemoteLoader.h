#ifndef _REMOTE_LOADER_H_
#define _REMOTE_LOADER_H_
#include "RemoteControlWithUndo.h"
#include "Light.h"
#include "Stereo.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"
#include "StereoOffWithCDCommand.h"
#include "StereoOnWithCDCommand.h"
#include "CeilingFanHighCommand.h"
#include "CeilingFanMediumCommand.h"
#include "CeilingFanLowCommand.h"
#include "CeilingFanOffCommand.h"
#include "MacroCommand.h"
class RemoteLoader{
public:
    static void main(const char **args = nullptr) {
        RemoteControlWithUndo *remoteControl = new RemoteControlWithUndo();

        Light *livingRoomLight = new Light("Living Room");
        Light *kitchenLight = new Light("Kitchen");
        Stereo *stereo = new Stereo("Living Room");


        LightOnCommand *livingRoomLightOn = new LightOnCommand(livingRoomLight);
        LightOffCommand *livingRoomLightOff = new LightOffCommand(livingRoomLight);
        LightOnCommand *kitchenLightOn = new LightOnCommand(kitchenLight);
        LightOffCommand *kitchenLightOff = new LightOffCommand(kitchenLight);
        
        StereoOnWithCDCommand *stereoOnWithCD = new StereoOnWithCDCommand(stereo);
        StereoOffWithCDCommand *stereoOff = new StereoOffWithCDCommand(stereo);

        remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
        remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);
        remoteControl->setCommand(2, stereoOnWithCD, stereoOff);


        remoteControl->onButtonWasPushed(0);
        remoteControl->offButtonWasPushed(0);
        std::cout << remoteControl << std::endl;
        remoteControl->undoButtonWasPushed();
        remoteControl->offButtonWasPushed(0);
        remoteControl->onButtonWasPushed(0);
        std::cout << remoteControl << std::endl;
        remoteControl->undoButtonWasPushed();


        // remoteControl->onButtonWasPushed(1);
        // remoteControl->offButtonWasPushed(1);
        // remoteControl->onButtonWasPushed(2);
        // remoteControl->offButtonWasPushed(2);
        std::cout << "------ ************************************************************************ ------\n";
        RemoteControlWithUndo *remoteControl2 = new RemoteControlWithUndo();
        CeilingFan *ceilingFan = new CeilingFan("Living Room");
        CeilingFanMediumCommand *ceilingFanMedium = new CeilingFanMediumCommand(ceilingFan);
        CeilingFanHighCommand *ceilingFanHigh = new CeilingFanHighCommand(ceilingFan);
        CeilingFanOffCommand *ceilingFanOff = new CeilingFanOffCommand(ceilingFan);

        remoteControl2->setCommand(0, ceilingFanMedium, ceilingFanOff);
        remoteControl2->setCommand(1, ceilingFanHigh, ceilingFanOff);

        remoteControl2->onButtonWasPushed(0);
        remoteControl2->offButtonWasPushed(0);
        std::cout << remoteControl2 << std::endl;
        remoteControl2->undoButtonWasPushed();
        
        remoteControl2->onButtonWasPushed(1);
        std::cout << remoteControl2 << std::endl;
        remoteControl2->undoButtonWasPushed();
        std::cout << "------ ************************************************************************ ------\n";
        Light *light = new Light("Living Room");
        Stereo *stereo2 = new Stereo("Living Room");
        LightOnCommand *lightOn = new LightOnCommand(light);
        LightOffCommand *lightOff = new LightOffCommand(light);
        StereoOnWithCDCommand *stereoOn2 = new StereoOnWithCDCommand(stereo2);
        StereoOffWithCDCommand *stereoOff2 = new StereoOffWithCDCommand(stereo2);
        std::vector<Command*>partyOn = std::vector<Command*>{ lightOn, stereoOn2};
        std::vector<Command*>partyOff = std::vector<Command*>{ lightOff, stereoOff2};

        MacroCommand *partyOnMacro = new MacroCommand(partyOn);
        MacroCommand *partyOffMacro = new MacroCommand(partyOff);

        RemoteControlWithUndo *remoteControl3 = new RemoteControlWithUndo();
        remoteControl3->setCommand(0, partyOnMacro, partyOffMacro);

        std::cout << remoteControl3 << std::endl;
        std::cout << "--- Pushing Macro On---\n";
        remoteControl3->onButtonWasPushed(0);
        std::cout << "--- Pushing Macro Off ---\n";
        remoteControl3->offButtonWasPushed(0); 
    }
};
#endif