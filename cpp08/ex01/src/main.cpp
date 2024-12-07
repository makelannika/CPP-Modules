#include "Span.hpp"
#include <iostream>

int main() {
	Span numbers(200);

	try {
		for (int i = 0; i < 183; i++)
			numbers.addNumber(i);
		std::cout << "longest span: " << numbers.longestSpan() << "\n";
		std::cout << "shortest span: " << numbers.shortestSpan() << "\n";
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	Span span2(numbers);
	try {
		span2.addNumber(4);	
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
}
