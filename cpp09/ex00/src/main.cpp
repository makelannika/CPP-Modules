#include "BitcoinExchange.hpp"

#include <iostream>

int main()
{
    // if (argc != 2) {
    //     std::cout << "Program takes a file as argument\n";
    // }

    try {
        BitcoinExchange btc;
        btc.readRates();
        btc.displayRates();
    } catch (std::exception& e) {
        std::cout << e.what() << "\n";
    }

	std::string input(argv[1]);
	
	BitcoinExchange btc;
	btc.getValues(input);
}