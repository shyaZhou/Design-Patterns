#ifndef _DEVICEDS_H_
#define _DEVICEDS_H_
#include <typeinfo>
#include <iostream>
using namespace std;
struct Object {
public:
    Object():_name("Object"){}
    Object(const char *name):_name(name){}
    virtual const char *getName() { return _name; }
private:
    const char* _name;
};
struct DvdPlayer : Object {
    DvdPlayer() : Object("DvdPlayer"){}
    void on() { cout << "DVD is On\n"; }
    void stop() { cout << "DVD is Stop\n"; }
    void eject() { cout << "DVD ejected]\n"; }
    void off() { cout << "DVD is off\n"; }
    void play(const std::string &movie) { cout << "DvdPlayer is playing movie : " << movie << endl; }
};
struct  Amplifier : Object
{
    Amplifier() : Object("Amplifier"){}
    void on() { cout << "Amplifier is On\n"; }
    void setDvd(DvdPlayer *dvd) { cout << "Amplifier Set Dvd to" << dvd->getName() << endl; }
    void setSurroundSound() { cout << "Amplifider Set Mode To Surround Sound Mode\n"; }
    void setVolume(int num) { cout << "Amplifier Set Volume to " << num << endl; }
    void off() { cout << "Amplifier is Off\n"; }
};
struct Tuner : Object {
    Tuner() : Object("Tuner"){}
};
struct CdPlayer : Object {
    CdPlayer() : Object("CdPlayer"){}
};
struct Projector : Object {
    Projector() : Object("Projector"){}
    void on() { cout << "Projector On\n"; }
    void wideScreenMode() { cout << "Set Projector Mode to Wide Screen Mode\n"; }
    void off() { cout << "Projector Off\n"; }
};
struct TheaterLights : Object {
    TheaterLights() : Object("TheaterLights"){}
    void dim(int num) { cout << "TheaterLights dim to 10\n"; }
    void on() { cout << "TheaterLights is On\n"; }
};
struct Screen : Object {
    Screen() : Object("Screen"){}
    void up() { cout << "Screen up\n"; }
    void down() { cout << "Screen down\n"; }
};
struct PopcornPopper : Object {
    PopcornPopper() : Object("PopcornPopper"){}
    void on() { cout << "PopcornPopper On\n"; }
    void pop() { cout << "PopcornPopper Pop\n"; }
    void off() { cout << "PopcornPopper Off\n"; }
};

#endif