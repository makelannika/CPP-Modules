#include "PmergeMe.hpp"

#include <iostream>

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cerr << "Error: program takes a positive integer sequence as argument\n";
        return 1;
    }

    try {
		PmergeMe pmm(argv[1]);
		pmm.sort();
    } catch (std::exception& e) {
        std::cerr << e.what() << "\n";
    }
}