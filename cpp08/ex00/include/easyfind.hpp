#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <iostream>
#include <ranges>

template<typename T>
void easyfind(const T& container, int value) {
	if constexpr (!std::is_same_v<typename T::value_type, int>) 
		throw std::invalid_argument("container needs to hold type int");
		
	if (std::ranges::find(container, value) == container.end())
		throw std::out_of_range("value " + std::to_string(value) + " not found");
	std::cout << "value " << value << " found\n";
}

#endif
