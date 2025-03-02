#include <iostream>
#include "input.hpp"

int InputData::input() {
    std::cout << "Enter A B C coeffs" << std::endl;
    std::cin >> a >> b >> c;

    setStatus();
    
    return 0;
}

void InputData::setStatus() {
    if (a != 0) status = QUADRATIC;
    else if (b != 0) status = LINEAR;
    else if (c == 0) status = ENDLESS_ROOTS;
    else status = NOT_VALID;
}