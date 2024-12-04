#include "Span.hpp"
#include <iostream>

int main() {
	Span numbers(200);

	try {
		for (int i = 0; i < 183; i++)
			numbers.addNumber(i);
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
	std::cout << numbers.longestSpan() << "\n";
}
