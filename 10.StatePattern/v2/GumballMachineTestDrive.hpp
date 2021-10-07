#ifndef GUMBALL_MACHINE_TEST_H_
#define GUMBALL_MACHINE_TEST_H_
#include "GumballMachine.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, GumballMachine *gumballMachine) {
    os << "State = " << gumballMachine->getCount() << std::endl;
    return os;
}

struct GumballMachineTestDrive {
    static void main(const char *args = nullptr) {
        GumballMachine *gumballMachine = new GumballMachine(5);
        std::cout << gumballMachine << std::endl;

        gumballMachine->insertQuarter();
        gumballMachine->turnCrank();
        std::cout << gumballMachine << std::endl;

        gumballMachine->insertQuarter();
        gumballMachine->ejectQuarter();
        gumballMachine->turnCrank();
        std::cout << gumballMachine << std::endl;

        gumballMachine->insertQuarter();
        gumballMachine->turnCrank();
        gumballMachine->insertQuarter();
        gumballMachine->turnCrank();
        gumballMachine->ejectQuarter();
        std::cout << gumballMachine << std::endl;

        gumballMachine->insertQuarter();
        gumballMachine->insertQuarter();
        gumballMachine->turnCrank();
        gumballMachine->insertQuarter();
        gumballMachine->turnCrank();
        gumballMachine->insertQuarter();
        gumballMachine->turnCrank();
        std::cout << gumballMachine << std::endl;
        
        delete gumballMachine; 
    }
};
#endif