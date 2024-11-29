#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main() {
	{
		std::deque<int> dq = {8, 11, 6, 3};
		std::list<int> lst = {-2, 0, 1, -12};
		std::vector<int> vctr = {2, 10, 4, 5, 7};

		try {
			easyfind(dq, 3);
			easyfind(lst, 0);
			easyfind(vctr, 2);
			easyfind(vctr, 18);
		} catch (std::exception& e) {
			std::cerr << e.what() << "\n";
		}
	}

	std::cout << "\n";
	std::vector<float> vctr = {2.1, 4.5, 6.7};
	
	try {
		easyfind(vctr, 2);
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
}
