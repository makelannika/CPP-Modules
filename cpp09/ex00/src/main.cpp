#include "BitcoinExchange.hpp"

#include <iostream>

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cout << "Program takes a file as argument\n";
        return 1;
    }

	std::string input(argv[1]);

    try {
        BitcoinExchange btc;
        btc.readRates();
        btc.processInput(input);
        // btc.displayRates();
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }
}