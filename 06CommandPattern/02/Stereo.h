#ifndef _STEREO_H
#define _STEREO_H
#include <iostream>
#include <string>
struct Stereo {
    Stereo(const std::string &name) : _name(name) {}
    void on(){
        std::cout <<_name << ": Stereo is ON\n";
    }
    void setCD(){
        _isSetCD = true;
        std::cout <<_name << ": Stereo is setCD\n";
    }
    void setVolume(int volume){
        _volume = volume;
        std::cout <<_name << ": Stereo volume is " << volume << std::endl;
    }
    void off(){
        std::cout << _name << ": Stereo is Off\n";
    }
    int getVolume() {
        return _volume;
    }
    void resetCD(){
        _isSetCD = false;
        std::cout << _name << ": Stereo is resetCD\n";
    }
private:
    int _volume = 0;
    bool _isSetCD = false;
    const std::string _name;
};
#endif