#include "BitcoinExchange.hpp"

#include <fstream>
#include <stdexcept>
#include <iostream>
#include <algorithm>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    rates = other.rates;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
        rates = other.rates;
    return *this;
}

void    BitcoinExchange::readRates()
{
    std::ifstream   data("data.csv", std::ios::binary);
    if (!data.is_open())
        throw std::ios_base::failure("could not open file");

    std::string firstLine;
    getline(data, firstLine);
    if (firstLine != "date,exchange_rate")
        throw std::invalid_argument("Error: invalid csv file content");

    for (std::string line; getline(data, line);)
    {
        auto pos = line.find(",");
        if (pos == std::string::npos)
            throw std::invalid_argument("Error: invalid csv file content");
        std::string date = line.substr(0, pos);
        try {
            size_t  idx;
            std::string valueStr = line.substr(pos + 1);
            double value = std::stod(valueStr, &idx);
            if (idx != valueStr.length())
                throw std::invalid_argument("Error: invalid csv file content");
            rates[convertDate(date)] = value;
        } catch (std::exception& e) {
            throw std::invalid_argument("Error: invalid csv file content");
        }
    }
}

int BitcoinExchange::convertDate(const std::string& date)
{
    int year, month, day;

    if (std::any_of(date.begin(), date.end(), ::iswspace))
        throw std::invalid_argument("Error: bad input => " + date);

    if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
        throw std::invalid_argument("Error: bad input => " + date);

    if ((year < 0 || month < 1 || month > 12 || day < 0)
        || (month == 2 && year % 4 != 0 && day > 28)
        || (month == 2 && year % 4 == 0 && day > 29)
        || (month > 7 && month % 2 == 0 && day > 31)
        || (month > 7 && month % 2 != 0 && day > 30)
        || (month < 8 && month % 2 == 0 && day > 30)
        || (month < 8 && month % 2 != 0 && day > 31))
            throw std::invalid_argument("Error: bad input => " + date);

    return year * 10000 + month * 100 + day;
}

void    BitcoinExchange::processInput(const std::string& inputFile)
{
    std::ifstream input(inputFile, std::ios::binary);
    if (!input.is_open())
        throw std::ios_base::failure("Error: could not open file");

    std::string firstLine;
    getline(input, firstLine);
    if (firstLine != "date | value")
        throw std::invalid_argument("Error: invalid input file content");
    
    for (std::string line; getline(input, line);) {
        try {
            auto pos = line.find(" | ");
            if (pos == std::string::npos)
                throw std::invalid_argument("Error: bad input => " + line);
            std::string dateStr = line.substr(0, pos);
            int date = convertDate(dateStr);
            double value = getValue(line.substr(pos + 3));
            double rate = findRate(date);
            std::cout << dateStr << " => " << value << " = " << value * rate << "\n";
        } catch (std::exception& e) {
            std::cout << e.what() << "\n";
        }
    }
}

double    BitcoinExchange::getValue(const std::string& valueStr)
{
    if (std::any_of(valueStr.begin(), valueStr.end(), ::iswspace))
        throw std::invalid_argument("Error: bad input => " + valueStr);

    size_t  idx;
    double value;
    try{
        value = std::stod(valueStr, &idx);
    } catch (std::exception& e) {
        throw std::invalid_argument("Error: bad input => " + valueStr);
    }

    if (idx != valueStr.length())
        throw std::invalid_argument("Error: bad input => " + valueStr);
    if (value < 0)
        throw std::out_of_range("Error: not a positive number.");
    if (value > 1000)
        throw std::out_of_range("Error: too large a number.");
    
    return value;
}

double  BitcoinExchange::findRate(int date)
{
    auto lower = rates.lower_bound(date);
    if (lower != rates.end() && lower->first == date)
        return lower->second;
    else if (lower != rates.begin())
    {
        lower--;
        return lower->second;
    }
    else
        throw std::out_of_range("no rate available for date " + std::to_string(date));
}

BitcoinExchange::~BitcoinExchange() {}
