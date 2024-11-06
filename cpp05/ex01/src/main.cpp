/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:10:36 by amakela           #+#    #+#             */
/*   Updated: 2024/11/06 21:00:41 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	Bureaucrat	b1("Bob", 2);
	Form		f1("f1", 15, 15);
	Form		f2("f2", 1, 1);

	std::cout << b1 << std::endl;
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
	
	try {
		b1.signForm(f1);
		b1.signForm(f2);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;
}
