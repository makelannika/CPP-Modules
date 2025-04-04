#include "PmergeMe.hpp"

#include <iostream>
#include <utility>
#include <chrono>
#include <math.h>

PmergeMe::PmergeMe(char** input) : m_vecTime(0), m_deqTime(0), m_unitSize(1)
{
	auto start = std::chrono::high_resolution_clock::now();
    initContainer(input, m_vector);
	auto end = std::chrono::high_resolution_clock::now();
	m_vecTime += std::chrono::duration<double, std::micro>(end - start).count();

	if (m_vector.empty())
		throw std::invalid_argument("invalid input");

	start = std::chrono::high_resolution_clock::now();
	initContainer(input, m_deque);
	end = std::chrono::high_resolution_clock::now();
	m_deqTime += std::chrono::duration<double, std::micro>(end - start).count();
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other)
{
    m_vector = other.m_vector;
    m_deque = other.m_deque;
    m_vecTime = other.m_vecTime;
    m_deqTime = other.m_deqTime;
    m_unitSize = other.m_unitSize;
}

PmergeMe&   PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other) {
        m_vector = other.m_vector;
        m_deque = other.m_deque;
        m_vecTime = other.m_vecTime;
        m_deqTime = other.m_deqTime;
        m_unitSize = other.m_unitSize;
    }
    return *this;
}

void	PmergeMe::display(const std::vector<int>& unsorted)
{
	std::cout << "Before: ";
	for (int n: unsorted)
		std::cout << n << " ";
	std::cout << "\nAfter: ";
	for (int n: m_vector)
		std::cout << n << " ";
	std::cout << "\nTime to process a range of " << m_vector.size()
			<< " elements with std::vector" << " : " << m_vecTime << " us\n";
	std::cout << "Time to process a range of " << m_vector.size()
			<< " elements with std::deque" << " : " << m_deqTime << " us\n";
}

void    PmergeMe::sort()
{
	std::vector<int>	unsorted = m_vector;

	auto start = std::chrono::high_resolution_clock::now();
	sortVector();
	auto end = std::chrono::high_resolution_clock::now();
	m_vecTime += std::chrono::duration<double, std::micro>(end - start).count();

	start = std::chrono::high_resolution_clock::now();
	sortDeque();
	end = std::chrono::high_resolution_clock::now();
	m_deqTime += std::chrono::duration<double, std::micro>(end - start).count();

	display(unsorted);
}

void    PmergeMe::sortVector()
{
    if (m_vector.size() / m_unitSize < 2)
        return;

    for (size_t i = 0; i <= m_vector.size() - m_unitSize * 2; i += m_unitSize * 2) {
        if (m_vector[i + m_unitSize - 1] > m_vector[i + m_unitSize * 2 - 1]) {
            for (int j = 0; j < m_unitSize; j++) {
                std::swap(m_vector[i + j], m_vector[i + m_unitSize + j]);
            }
        }
    }
    
    m_unitSize *= 2;
    sortVector();
    m_unitSize /= 2;

	if (m_vector.size() / m_unitSize < 3)
		return;

	int 				units = m_vector.size() / m_unitSize;
	bool				isOdd = units % 2;
	int             	odd = 0;
	std::vector<int>	main;
	std::vector<int>	pend;

	main.push_back(m_vector[m_unitSize - 1]);
	main.push_back(m_vector[2 * m_unitSize - 1]);

	for (int i = 2; i < units - isOdd; i++) {
		if (i % 2 == 0)
			pend.push_back(m_vector[i * m_unitSize + m_unitSize - 1]);
		else
			main.push_back(m_vector[i * m_unitSize + m_unitSize - 1]);
	}

    if (isOdd)
        odd = m_vector[units * m_unitSize - 1];

    std::vector<int>    leftover(m_vector.begin() + units * m_unitSize, m_vector.end());

    insert(m_vector, main, pend, isOdd, odd, leftover);
}

void    PmergeMe::sortDeque()
{
    if (m_deque.size() / m_unitSize < 2)
        return;

    for (auto it = m_deque.begin(); it + m_unitSize * 2 <= m_deque.end(); it += m_unitSize * 2) {
        if (*(it + m_unitSize - 1) > *(it + 2 * m_unitSize - 1)) {
            for (int j = 0; j < m_unitSize; j++) {
                std::swap(*(it + j), *(it + m_unitSize + j));
            }
        }
    }
    
    m_unitSize *= 2;
    sortDeque();
    m_unitSize /= 2;

	if (m_deque.size() / m_unitSize < 3)
		return;

	int 				units = m_deque.size() / m_unitSize;
	bool				isOdd = units % 2;
	int             	odd = 0;
	std::deque<int>		main;
	std::deque<int>		pend;

	main.push_back(*(m_deque.begin() + m_unitSize - 1));
	main.push_back(*(m_deque.begin() + 2 * m_unitSize - 1));

	for (int i = 2; i < units - isOdd; i++) {
		if (i % 2 == 0)
			pend.push_back(*(m_deque.begin() + i * m_unitSize + m_unitSize - 1));
		else
			main.push_back(*(m_deque.begin() + i * m_unitSize + m_unitSize - 1));
	}

    if (isOdd)
        odd = *(m_deque.begin() + units * m_unitSize - 1);

    std::deque<int>    leftover(m_deque.begin() + units * m_unitSize, m_deque.end());

    insert(m_deque, main, pend, isOdd, odd, leftover);
}

int PmergeMe::jacobsthal(int k)
{
    return round((pow(2, k + 1) + pow(-1, k)) / 3);
}
