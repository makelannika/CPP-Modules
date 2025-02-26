#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>

int main() {
	std::deque<int> dq = {0, 14, -3, 8};
	std::list<int> lst = {-2, 1, 11, -12};
	std::array<int, 3> arr = {15, 100, 2};
	std::vector<int> vctr;

	for (int i = 0; i < 3; i++) {
		auto dqit = easyfind(dq, i);
			std::cout << "value " << i << (dqit != dq.end() ? " found in deque\n" : " not found in deque\n");
		auto lstit = easyfind(lst, i);
			std::cout << "value " << i << (lstit != lst.end() ? " found in list\n" : " not found in list\n");
		auto arrit = easyfind(arr, i);
			std::cout << "value "  << i << (arrit != arr.end() ? " found in array\n" : " not found in array\n");
		auto vctrit = easyfind(vctr, i);
			std::cout << "value " << i << (vctrit != vctr.end() ? " found in vector\n" : " not found in vector\n");
		std::cout << "\n";
	}
}
