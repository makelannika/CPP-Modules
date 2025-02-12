#include "Span.hpp"

#include <iostream>
#include <vector>

int main() {
	Span span(50000);

	std::cout << "====== TEST EMPTY SPAN ======\n";
	try {
		std::cout << "longest span: " << span.longestSpan() << "\n";
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	try {
		std::cout << "shortest span: " << span.shortestSpan() << "\n";
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << "\n\n";

	std::cout << "====== TEST ADD NUMBER ======\n";
	try {
		for (int i = 0; i < 49972; i++)
			span.addNumber(i);
		std::cout << "longest span: " << span.longestSpan() << "\n";
		std::cout << "shortest span: " << span.shortestSpan() << "\n";
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << "\n\n";

	std::cout << "====== TEST ADD RANGE =======\n";
	std::vector<int> range = {5, 18, 21, 200, 234, 3235, 5, 222, -1, 0, 124,
								 123, 32, -77, 2, 111, -8, -345, 10000, 90};
	try {
		span.addRange(range.begin(), range.end());
		std::cout << "longest span: " << span.longestSpan() << "\n";
		std::cout << "shortest span: " << span.shortestSpan() << "\n";
		std::cout << "\n";
		span.addRange(range.begin(), range.end());
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << "\n\n";

	std::cout << "====== TEST ADD NUMBER ======\n";
	try {
		for (int i = 0; i < 30; i++)
			span.addNumber(i);
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << "\n";
}