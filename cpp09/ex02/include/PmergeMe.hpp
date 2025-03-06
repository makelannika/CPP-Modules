#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>

class PmergeMe {
    private:
        std::vector<int>    m_vector;
        std::deque<int>     m_deque;
		double				m_vecTime;
		double				m_deqTime;
		int					m_unitSize;

		void	validateInput(const std::string& input);
		void	sortVector();
		void	sortDeque();
        void    insertVector(std::vector<int>& main, std::vector<int>& pend, bool isOdd, int odd, std::vector<int>& leftover);
		void    insertDeque(std::deque<int>& main, std::deque<int>& pend, bool isOdd, int odd, std::deque<int>& leftover);
		void	display(const std::vector<int>& unsorted);

    public:
        PmergeMe(const std::string& input);
        ~PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe&   operator=(const PmergeMe& other);

        void	sort();
};

#endif
