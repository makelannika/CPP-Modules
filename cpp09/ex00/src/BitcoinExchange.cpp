#include "BitcoinExchange.hpp"

#include <fstream>
#include <stdexcept>
#include <iostream>
#include <iomanip>

BitcoinExchange::BitcoinExchange() {
	try {
		setRates();
	} catch (std::exception& e) {
		std::cout << e.what() << "\n";
	}
	displayRates();
}

void	BitcoinExchange::setRates()
{
	std::ifstream file("data.csv");
	if (!file.is_open())
		throw std::runtime_error("error opening file");

	for (std::string line; getline(file, line);) {
		if (line == "date,exchange_rate")
			continue;
		size_t pos = line.find(',');
		std::string date = line.substr(0, pos);
		std::string value = line.substr(pos + 1);
		rates[getDate(date)] = std::stod(value);
	}
}

date	BitcoinExchange::getDate(const std::string& dateString)
{
	date		d;
	std::string	year = dateString.substr(0, 4);
	std::string	month = dateString.substr(5, 2);
	std::string	day = dateString.substr(8, 2);

	d.year = std::stoi(year);
	d.month = std::stoi(month);
	d.day = std::stoi(day);
	return d;
}

void	BitcoinExchange::displayRates()
{
	for (auto [key, value]: rates) {
		std::cout << key.year << "-" << key.month << "-" << key.day << ",";
		std::cout << std::fixed << std::setprecision(2) << value << "\n";
	}
}

BitcoinExchange::~BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange&)  {

}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange&) {
	return *this;
}

void	BitcoinExchange::getValues(const std::string& input) {
	std::ifstream infile(input);

	for (std::string line; getline(infile, line);) {
		if (line == "date | value")
			continue;
		
	}
}