#ifndef _BEVERAGE_H_
#define _BEVERAGE_H_
#include <iostream>
#include <string>
enum SIZE{
    TALL,
    GRANDE,
    VENT
};
class Beverage {
public:
    Beverage(){}
    Beverage(const std::string& description) : _description(description) {}
    Beverage(std::string&& description) : _description(description) {}
    virtual const std::string getDescription() const { return _description; }
    virtual double cost() = 0;
    int getSize() {}
protected:
    std::string _description = "Unknown Beverage";
    SIZE _size;
};
#endif