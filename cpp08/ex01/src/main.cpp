#include "Span.hpp"

#include <iostream>
#include <vector>

int main() {
	Span numbers(200);

	try {
		for (int i = 0; i < 193; i++)
			numbers.addNumber(i);
		std::cout << "longest span: " << numbers.longestSpan() << "\n";
		std::cout << "shortest span: " << numbers.shortestSpan() << "\n";
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	std::vector<int> range = {5, 18, 21, 200};
	try {
		numbers.addRange(range.begin(), range.end());
		std::cout << "\nlongest span: " << numbers.longestSpan() << "\n";
		std::cout << "shortest span: " << numbers.shortestSpan() << "\n";
		numbers.addRange(range.begin(), range.end());
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
}
