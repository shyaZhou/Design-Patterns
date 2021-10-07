#ifndef _CONDIMENT_H_
#define _CONDIMENT_H_
#include "Beverage.h"
#include <string>
class CondimentDecorator : public Beverage 
{
public:
    virtual const std::string getDescription() const = 0;
};
#endif