#include "Span.hpp"
#include <stdexcept>
#include <iostream>

Span::Span(unsigned int n) : max(n) {}

Span::Span(const Span& obj) : numbers(obj.numbers), max(obj.max) {}

const Span& Span::operator=(const Span& obj) {
	if (this != &obj)
		numbers = obj.numbers;
	return *this;
}

void Span::addNumber(int num) {
	if (numbers.size() == max)
		throw std::length_error("container is full");
	numbers.emplace(num);
}

unsigned int Span::shortestSpan() {
	if (numbers.size() < 2)
		throw std::length_error("cannot find shortest span");
	
	return 0;
}

unsigned int Span::longestSpan() {
	if (numbers.size() < 2)
		throw std::length_error("cannot find longest span");
	std::multiset<int>::iterator first = numbers.begin();
	std::multiset<int>::iterator last = numbers.end();
	return *last - *first;
}

Span::~Span() {}
