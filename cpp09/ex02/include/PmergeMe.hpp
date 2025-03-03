#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <vector>
#include <deque>

class PmergeMe {
    private:
        std::vector<int>    m_vector;
        std::deque<int>     m_deque;

    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& other);
        PmergeMe&   operator=(const PmergeMe& other);

        
};

#endif