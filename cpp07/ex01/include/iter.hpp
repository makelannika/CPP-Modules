/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:38:42 by amakela           #+#    #+#             */
/*   Updated: 2024/11/23 16:52:06 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void print(T element) { std::cout << element << std::endl; }

template<typename T, typename F>
void iter(T* array, size_t len, F func) {
	if (array != nullptr) {
		for (size_t i = 0; i < len; i++)
			func(array[i]);
	}
}

#endif
