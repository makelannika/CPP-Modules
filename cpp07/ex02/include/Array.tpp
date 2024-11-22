/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:10:19 by amakela           #+#    #+#             */
/*   Updated: 2024/11/22 19:03:05 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template<typename T>
Array<T>::Array() : elements(0), array(0) {};

template<typename T>
Array<T>::Array(unsigned int n) : elements(n), array(new T[n]) {
	for (unsigned int i = 0; i < elements; i++)
		array[i] = T();
}

template<typename T>
Array<T>::Array(const Array& obj) : elements(obj.elements), array(new T[elements]) {
	for (unsigned int i = 0; i < elements; i++)
			array[i] = obj.array[i];
}

template<typename T>
const Array<T>& Array<T>::operator=(const Array<T>& obj) {
	if (this != &obj) {
		elements = obj.elements;
		delete[] array;
		array = new T[elements];
		for (unsigned int i = 0; i < elements; i++)
			array[i] = obj.array[i];
	}
	return *this;
};

template<typename T>
T& Array<T>::operator[](unsigned int idx) {
	if (idx >= elements)
		throw std::out_of_range("index is out of range");
	return array[idx];
};

template<typename T>
unsigned int Array<T>::size() const {
	return elements;
};

template<typename T>
Array<T>::~Array() {
	delete[] array;
};
