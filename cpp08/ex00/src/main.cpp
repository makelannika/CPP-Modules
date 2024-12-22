#include "easyfind.hpp"
#include <vector>
#include <array>
#include <deque>
#include <list>

int main() {
	std::deque<int> dq = {9, 14, -3, 8};
	std::list<int> lst = {-2, 0, 11, -12};
	std::array<int, 3> arr = {15, 100, 3};
	std::vector<int> vctr;

	for (int i: dq) {
		i++;
		auto dqit = easyfind(dq, i);
			std::cout << "value " << (dqit != dq.end() ?
			std::to_string(*dqit) + " found in deque\n" : std::to_string(i) + " not found in deque\n");
		auto lstit = easyfind(lst, i);
			std::cout << "value " << (lstit != lst.end() ?
			std::to_string(*lstit) + " found in list\n" : std::to_string(i) + " not found in list\n");
		auto arrit = easyfind(arr, i);
			std::cout << "value "  << (arrit != arr.end() ?
			std::to_string(*arrit) + " found in array\n" : std::to_string(i) + " not found in array\n");
		auto vctrit = easyfind(vctr, i);
			std::cout << "value " << (vctrit != vctr.end() ?
			std::to_string(*vctrit) + " found in vector\n" : std::to_string(i) + " not found in vector\n");
		std::cout << "\n";
	}
}
