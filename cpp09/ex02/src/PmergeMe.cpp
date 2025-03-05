#include "PmergeMe.hpp"

#include <sstream>
#include <stdexcept>
#include <utility>
#include <iostream> // debug

using pairVector = std::vector<std::pair<std::vector<int>, std::vector<int>>>;

PmergeMe::PmergeMe(const std::string& input) : m_unitSize(1)
{
    validateInput(input);
}

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

void    PmergeMe::sort()
{
    for (size_t i = 0; i < m_vector.size(); i++)
        std::cout << m_vector[i] << " ";
    std::cout << "\n\n";

    if (m_vector.size() / m_unitSize < 2)
        return;

    for (size_t i = 0; i <= m_vector.size() - m_unitSize * 2; i += m_unitSize * 2) {
        std::cout << "COMPARING: " << m_vector[i + m_unitSize - 1] << " AND " << m_vector[i + m_unitSize * 2 - 1] << "\n";
        if (m_vector[i + m_unitSize - 1] > m_vector[i + m_unitSize * 2 - 1]) {
            for (int j = 0; j < m_unitSize; j++) {
                std::swap(m_vector[i + j], m_vector[i + m_unitSize + j]);
            }
        }
    }
    
    m_unitSize *= 2;
    sort();
    m_unitSize /= 2;

	// std::vector<int>	main;
	// std::vector<int>	pend;



}


