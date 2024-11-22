/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:38:42 by amakela           #+#    #+#             */
/*   Updated: 2024/11/22 12:29:11 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void print(T element) { std::cout << element << std::endl; }

template<typename A, typename L, typename F>
void iter(A* array, L length, F func) {
	for (int i = 0; i < length; i++) {
		func(array[i]);
	}
}

#endif
