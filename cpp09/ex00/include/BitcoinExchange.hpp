#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE

#include <map>

class BitcoinExchange {
    private:
        std::map<int, double> rates;

        int convertDate(const std::string& date);

    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange&);
		BitcoinExchange& operator=(const BitcoinExchange&);
        
        void    readRates();
        void    processInput(const std::string& inputFile);

        // void    displayRates(); 
};

#endif
