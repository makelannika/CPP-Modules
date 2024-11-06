/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:50:49 by amakela           #+#    #+#             */
/*   Updated: 2024/11/06 21:15:47 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	Bureaucrat bob("Bob", 2), rob("Rob", 149);
	std::cout << bob << rob << std::endl;
	
	try {
		Bureaucrat todd("Todd", 151);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		bob.incrementGrade();
		rob.decrementGrade();
		bob.incrementGrade();
	} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
	}
	std::cout << bob << rob << std::endl;

	try {
		rob.decrementGrade();
	} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
	}
	std::cout << bob << rob << std::endl;
}
