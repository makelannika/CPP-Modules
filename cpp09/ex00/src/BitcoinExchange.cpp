#include "BitcoinExchange.hpp"

#include <fstream>
#include <stdexcept>
#include <iostream>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange&) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange&) { return *this; }

void    BitcoinExchange::readRates()
{
    std::ifstream   data("data.csv", std::ios::binary);
    if (!data.is_open())
        throw std::ios_base::failure("could not open file");

    for (std::string line; getline(data, line);)
    {
        if (line == "date,exchange_rate")
            continue;
        auto pos = line.find(",");
        std::string date = line.substr(0, pos);
        rates[convertDate(date)] = std::stod(line.substr(pos + 1));
    }
}

int BitcoinExchange::convertDate(const std::string& date)
{
    int year, month, day;

    if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3) {
        throw std::invalid_argument("invalid date format");
    }
    return year * 10000 + month * 100 + day;
}

void    BitcoinExchange::processInput(const std::string& inputFile) {}

BitcoinExchange::~BitcoinExchange() {}

// void    BitcoinExchange::displayRates()
// {
//     for (auto [key, value]: rates)
//         std::cout << key << "," << value << "\n";
// }