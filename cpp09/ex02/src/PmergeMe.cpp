#include "PmergeMe.hpp"

#include <sstream>
#include <stdexcept>
#include <iostream> // debug

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

void    PmergeMe::validateInput(const std::string& input)
{
    std::istringstream  inputStream(input);
    std::string         s;

    try {
        while (inputStream >> s) {
            size_t  idx;
            int     num = std::stoi(s, &idx);
            if (idx != s.length() || num < 0)
                throw std::invalid_argument("Error: invalid input");
            m_vector.push_back(num);
            m_deque.push_back(num);
        }
    } catch (std::exception& e) {
        throw std::invalid_argument("Error: invalid input");
    }
}