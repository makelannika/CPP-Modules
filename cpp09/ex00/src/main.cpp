#include "BitcoinExchange.hpp"

#include <iostream>

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cout << "Program takes a file as argument\n";
    }

	std::string input(argv[1]);
	
	BitcoinExchange btc;
	btc.getValues(input);
}