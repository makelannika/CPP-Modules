#include "BitcoinExchange.hpp"

#include <iostream>

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cout << "Error: could not open file.\n";
        return 1;
    }
    
    try {
	    std::string input(argv[1]);
        BitcoinExchange btc;
        btc.readRates();
        btc.processInput(input);
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }
}
