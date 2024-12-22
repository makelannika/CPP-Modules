#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <ranges>

template<typename T>
typename T::const_iterator easyfind(const T& container, int value) {
	static_assert(std::is_same_v<typename T::value_type, int>, "Container must hold type int");

	return std::ranges::find(container, value);
}

#endif
