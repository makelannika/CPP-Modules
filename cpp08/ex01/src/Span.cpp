#include "Span.hpp"
#include <algorithm>
#include <numeric>
#include <vector>

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
