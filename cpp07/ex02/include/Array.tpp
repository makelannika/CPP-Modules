/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:10:19 by amakela           #+#    #+#             */
/*   Updated: 2024/11/23 19:04:57 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template<typename T>
Array<T>::Array() : len(0), array(new T[0]) {};

template<typename T>
Array<T>::Array(unsigned int n) : len(n), array(new T[n]()) {}

template<typename T>
Array<T>::Array(const Array& obj) : len(obj.len), array(new T[len]) {
	for (unsigned int i = 0; i < len; i++)
		array[i] = obj.array[i];
}

template<typename T>
const Array<T>& Array<T>::operator=(const Array<T>& obj) {
	if (this != &obj) {
		len = obj.len;
		delete[] array;
		array = new T[len];
		for (unsigned int i = 0; i < len; i++)
			array[i] = obj.array[i];
	}
	return *this;
};

template<typename T>
T& Array<T>::operator[](unsigned int idx) {
	if (idx >= len)
		throw std::out_of_range("index is out of range");
	return array[idx];
};

template<typename T>
unsigned int Array<T>::size() const {
	return len;
};

template<typename T>
Array<T>::~Array() {
	delete[] array;
};
