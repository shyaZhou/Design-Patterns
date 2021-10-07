#include "DuckCall.h"
#include <iostream>

void DuckCall::duckcall() {
    std::cout << "Call Duck\n";
    _duck->performQuack();
}