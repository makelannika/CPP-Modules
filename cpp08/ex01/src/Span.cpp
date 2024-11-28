/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:02:53 by amakela           #+#    #+#             */
/*   Updated: 2024/11/28 20:18:54 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <iostream>

Span::Span(unsigned int n) {
	ints.reserve(n);
}

Span::Span(const Span& obj) : ints(obj.ints) {}

const Span& Span::operator=(const Span& obj) {
	if (this != &obj)
		ints = obj.ints;
	return *this;
}

void Span::addNumber(int num) {
	if (ints.size() == ints.capacity())
		throw std::length_error("container is full");
	ints.emplace_back(num);
	std::cout << "added " << num << "\n";
}

int Span::shortestSpan() {
	if (ints.size() < 2)
		throw std::length_error("cannot find shortest span");
	return 0;
}

int Span::longestSpan() {
	if (ints.size() < 2)
		throw std::length_error("cannot find longest span");
	return 0;
}

Span::~Span() {}
