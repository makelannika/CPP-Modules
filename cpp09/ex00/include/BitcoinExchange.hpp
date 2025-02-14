#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE

#include <map>
#include <string>

struct date {
	int	year, month, day;

	bool operator<(const date& other) const {
		return std::tie(year, month, day) < std::tie(other.year, other.month, other.day);
	}
};

class BitcoinExchange {
	private:
		std::map<date, double>	rates;

		void	setRates();
		date	getDate(const std::string& dateString);
		void	displayRates(); // debug

	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange&);
		BitcoinExchange& operator=(const BitcoinExchange&);

		// BitcoinExchange() = delete;

		void	getValues(const std::string& input);
};

#endif