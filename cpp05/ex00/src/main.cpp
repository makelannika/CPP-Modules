/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:50:49 by amakela           #+#    #+#             */
/*   Updated: 2024/10/31 20:17:19 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	try {
		Bureaucrat b1("Bob", 2);
		Bureaucrat b2("Rob", 149);
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		b1.incrementGrade();
		b2.decrementGrade();
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		} catch (Bureaucrat::GradeTooHighException& e) {
			std::cerr << e.what() << std::endl;
		} catch (Bureaucrat::GradeTooLowException& e) {
			std::cerr << e.what() << std::endl;
		}

	// try {
	// 	Bureaucrat b1("Bob", 1);
	// 	std::cout << b1 << std::endl;
	// 	Bureaucrat b2("Rob", 151);
	// 	std::cout << b2 << std::endl;
	// 	} catch (Bureaucrat::GradeTooHighException& e) {
	// 		std::cerr << e.what() << std::endl;
	// 	} catch (Bureaucrat::GradeTooLowException& e) {
	// 		std::cerr << e.what() << std::endl;
	// 	}
}
