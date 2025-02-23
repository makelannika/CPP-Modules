/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:10:36 by amakela           #+#    #+#             */
/*   Updated: 2024/11/08 12:20:42 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	test4() {
	Form	f3("f3", 1, 151);
}

void	test3() {
	Form	f3("f3", 151, 1);
}

void	test2() {
	Form	f3("f3", 1, 0);
}

void	test1() {
	Form	f3("f3", 0, 1);
}

int	main() {
	Bureaucrat	bob("Bob", 2);
	Form		f1("f1", 15, 15), f2("f2", 1, 1);

	/* creating forms with invalid grades */
	for (auto formTest : {test1, test2, test3, test4}) {
		try {
			formTest();
		} catch (std::exception& e) {
			std::cerr << e.what();
		}
	}
	std::cout << std::endl;

	/* info before signing */
	std::cout << bob << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	
	/* trying to sign the forms */
	try {
		bob.signForm(f1);
		bob.signForm(f2);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	/* info after signing */
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
}
