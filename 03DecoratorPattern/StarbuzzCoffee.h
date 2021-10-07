#ifndef _STARBUZZCOFFEE_H_
#define _STARBUZZCOFFEE_H_
#include "Beverage.h"
#include "Espresso.h"
#include "HouseBlend.h"
#include "Mocha.h"
#include "DarkRoast.h"
#include "Whip.h"
#include "Soy.h"
#include <iostream>
#include <sstream>
struct  StarbuzzCoffee
{
    static void main(const char *args[] = nullptr) {
        std::ostringstream oss;
        std::stringstream ss;
        ss.clear();
        ss.str("");
        Beverage *beverage = new Espresso();
        ss<<beverage->cost();
        std::cout << beverage->getDescription() + " $" << ss.str() << std::endl;

        ss.clear();
        ss.str("");
        Beverage *beverage2 = new DarkRoast();
        beverage2 = new Mocha(beverage2);
        beverage2 = new Mocha(beverage2);
        beverage2 = new Whip(beverage2);
        ss<<beverage2->cost();
        std::cout << beverage2->getDescription() + " $" << ss.str() << std::endl;
        
        ss.clear();
        ss.str("");
        Beverage *beverage3 = new HouseBlend();
        beverage3 = new Soy(beverage3);
        beverage3 = new Mocha(beverage3);
        beverage3 = new Whip(beverage3);
        ss<<beverage3->cost();
        std::cout << beverage3->getDescription() + " $" << ss.str() << std::endl;
    }
};

#endif