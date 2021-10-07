#ifndef _GARAGEDOOR_H_
#define _GARAGEDOOR_H_
#include <iostream>
struct GarageDoor {
    void open() {
        std::cout << "GarageDoor is Open\n";
    }
    void close() {
        std::cout << "GarageDoor is Close\n";
    }
};
#endif
