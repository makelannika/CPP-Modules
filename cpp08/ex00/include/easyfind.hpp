#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <iostream>
#include <ranges>

template<typename T>
void easyfind(const T& container, int value) {
	using type = typename T::value_type;

	if constexpr (std::is_same_v<type, int>) {
		auto iterator = std::ranges::find(container, value);
		if (iterator == container.end())
			throw std::out_of_range("value " + std::to_string(value) + " not found");
		std::cout << "value " << value << " found\n";
	}
	else
		throw std::invalid_argument("container needs to hold type int");
}

#endif
