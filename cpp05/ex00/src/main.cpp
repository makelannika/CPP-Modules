/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:50:49 by amakela           #+#    #+#             */
/*   Updated: 2024/11/06 17:52:10 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	Bureaucrat b1("Bob", 2), b2("Rob", 149), b3;
	std::cout << b1 << std::endl << b2 << std::endl << b3 << std::endl;
	try {
		Bureaucrat b3("Todd", 151);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		b1.incrementGrade();
		b2.decrementGrade();
		b1.incrementGrade();
	} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
	}
	std::cout << b1 << std::endl << b2 << std::endl;

	try {
		b2.decrementGrade();
	} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
	}
	std::cout << b1 << std::endl << b2 << std::endl;
}
