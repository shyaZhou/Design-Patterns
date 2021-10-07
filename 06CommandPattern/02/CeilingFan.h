#ifndef _CEILINGFAN_H_
#define _CEILINGFAN_H_
#include <string>
class CeilingFan {
public:
    const static int HIGH = 3;
    const static int MEDIUM = 2;
    const static int LOW = 1;
    const static int OFF = 0;
    CeilingFan(const std::string &location) : _location(location), _speed(OFF) {}
    void high() { _speed = HIGH; }
    void medium() { _speed = MEDIUM; }
    void low() { _speed = LOW; }
    void off() { _speed = OFF; }
    int getSpeed() { return _speed; }
private:
    std::string _location;
    int _speed;    
};
#endif