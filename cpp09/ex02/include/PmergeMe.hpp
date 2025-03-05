#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <vector>

class PmergeMe {
    private:
        std::vector<int>    m_vector;
        std::deque<int>     m_deque;
		int					m_unitSize;

		void	validateInput(const std::string& input);
        void    insertion(std::vector<int>& main, std::vector<int>& pend, bool isOdd, int odd, std::vector<int>& leftover);

    public:
        PmergeMe(const std::string& input);
        ~PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe&   operator=(const PmergeMe& other);

        void	sort();
};

#endif