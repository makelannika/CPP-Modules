#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE

#include <map>
#include <string>

class BitcoinExchange {
    private:
        std::map<int, double> rates;

        int     convertDate(const std::string& dateStr);
        double  getValue(const std::string& valueStr);
        double  findRate(int date);

    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange&);
		BitcoinExchange& operator=(const BitcoinExchange&);
        
        void    readRates();
        void    processInput(const std::string& inputFile);
};

#endif
