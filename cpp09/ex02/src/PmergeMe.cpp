#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other)
{
    m_vector = other.m_vector;
    m_deque = other.m_deque;
}

PmergeMe&   PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other) {
        m_vector = other.m_vector;
        m_deque = other.m_deque;
    }
    return *this;
}
