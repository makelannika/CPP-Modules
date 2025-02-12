#include "Span.hpp"

#include <algorithm>
#include <numeric>
#include <vector>

Span::Span(unsigned int n) : max(n) {}

Span::Span(const Span& other) : numbers(other.numbers), max(other.max) {}

Span& Span::operator=(const Span& other) {
	if (this != &other) {
		max = other.max;
		numbers = other.numbers;
	}
	return *this;
}

void Span::addNumber(int num) {
	if (numbers.size() == max)
		throw std::length_error("not enough capacity to add number");
	numbers.insert(num);
}

unsigned int Span::shortestSpan() {
	if (numbers.size() < 2)
		throw std::length_error("cannot find shortest span");
	std::vector<int> diffs(numbers.size());
	std::adjacent_difference(numbers.begin(), numbers.end(), diffs.begin());
	return *std::min_element(std::next(diffs.begin()), diffs.end());
}

unsigned int Span::longestSpan() {
	if (numbers.size() < 2)
		throw std::length_error("cannot find longest span");
	return *std::prev(numbers.end()) - *numbers.begin();
}

Span::~Span() {}
