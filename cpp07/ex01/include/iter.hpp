/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:38:42 by amakela           #+#    #+#             */
/*   Updated: 2024/11/22 13:16:51 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void print(T element) { std::cout << element << std::endl; }

template<typename T, typename F>
void iter(T* array, size_t len, F func) {
	for (size_t i = 0; i < len; i++) {
		func(array[i]);
	}
}

#endif
