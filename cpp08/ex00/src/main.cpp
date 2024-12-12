#include "easyfind.hpp"
#include <vector>
#include <array>
#include <deque>
#include <list>

int main() {
	std::deque<int> dq = {8, 11, 6, 3};
	std::list<int> lst = {-2, 0, 1, -12};
	std::array<int, 3> arr = {15, 100, 9};
	std::vector<int> vctr;

	try {
		auto dqit = easyfind(dq, 11);
			std::cout << "value " << (dqit != dq.end() ? std::to_string(*dqit) + " found\n" : "not found\n");
		auto lstit = easyfind(lst, -2);
			std::cout << "value " << (lstit != lst.end() ? std::to_string(*lstit) + " found\n" : "not found\n");
		auto arrit = easyfind(arr, 102);
			std::cout << "value "  << (arrit != arr.end() ? std::to_string(*arrit) + " found\n" : "not found\n");
		auto vctrit = easyfind(vctr, 500);
			std::cout << "value " << (vctrit != vctr.end() ? std::to_string(*vctrit) + " found\n" : "not found\n");
	} catch (std::exception& e) {
		std::cout << e.what() << "\n";
	}
}

