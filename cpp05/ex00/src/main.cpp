/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:50:49 by amakela           #+#    #+#             */
/*   Updated: 2024/11/07 12:19:38 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	test2() {
	Bureaucrat	todd("Todd", 151);
}

void	test1() {
	Bureaucrat	todd("Todd", 0);
}

int	main() {
	Bureaucrat bob("Bob", 2), rob("Rob", 149);
	
	/* creating bureaucrats with invalid grades */
	for (auto test : {test1, test2}) {
		try {
			test();
		} catch (std::exception& e) {
			std::cerr << e.what();
		}
	}
	std::cout << std::endl;
	
	/* bureaucrat info before */
	std::cout << bob << rob << std::endl;

	/* incrementing Bob's grade twice */
	try {
		bob.incrementGrade();
		bob.incrementGrade();
	} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
	}

	/* decrementing Rob's grade twice */
	try {
		rob.decrementGrade();
		rob.decrementGrade();
	} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
	}
	/* bureaucrat info after */
	std::cout << bob << rob << std::endl;
}
