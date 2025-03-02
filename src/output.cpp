#include <iostream>

#include "output.hpp"

int output(const RootsData& data) {
    switch (data.status)
    {
    case Data::NOT_VALID:
        std::cout << "NOT VALID EQUATION" << std::endl;
        break;
    
    case Data::ENDLESS_ROOTS:
        std::cout << "ENDLESS ROOTS" << std::endl;
        break;

    case Data::LINEAR:
        std::cout << "LINEAR EQUATION" <<  std::endl;
        std::cout << "Root: " << data.root1 << std::endl; 
        break;

    case Data::QUADRATIC:
        std::cout << "QUADRATIC EQUATION" << std::endl;
        std::cout << "Root 1: " << data.root1 << std::endl;
        std::cout << "Root 2: " << data.root2 << std::endl;
        break;
    
    default: return -1;
    }

    return 0;
}