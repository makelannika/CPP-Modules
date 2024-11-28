/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:02:53 by amakela           #+#    #+#             */
/*   Updated: 2024/11/28 21:13:25 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <iostream>

Span::Span(unsigned int n) : max(n) {}

Span::Span(const Span& obj) : numbers(obj.numbers), max(obj.max) {}

const Span& Span::operator=(const Span& obj) {
	if (this != &obj)
		numbers = obj.numbers;
	return *this;
}

void Span::addNumber(int num) {
	if (numbers.size() == max)
		throw std::length_error("container is full");
	numbers.insert(num);
	std::cout << "added " << num << "\n";
}

unsigned int Span::shortestSpan() {
	if (numbers.size() < 2)
		throw std::length_error("cannot find shortest span");
	return 0;
}

unsigned int Span::longestSpan() {
	if (numbers.size() < 2)
		throw std::length_error("cannot find longest span");
	return 0;
}

Span::~Span() {}
