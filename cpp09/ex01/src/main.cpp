#include "RPN.hpp"

#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Error: program takes an inverted Polish mathematical expression as an argument\n";
        return 1;
    }

    try {
        RPN rpn;
        std::cout << rpn.evaluate(argv[1]) << "\n";
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }
}
