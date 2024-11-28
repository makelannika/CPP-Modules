/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:59:44 by amakela           #+#    #+#             */
/*   Updated: 2024/11/28 20:13:48 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main() {
	Span span(5);

	try {
		for (int i = 0; i < 6; i++)
			span.addNumber(i);
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}

	Span span2(span);
	try {
		span2.addNumber(4);	
	} catch (std::exception& e) {
		std::cerr << e.what() << "\n";
	}
}
