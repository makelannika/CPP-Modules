/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:33:26 by amakela           #+#    #+#             */
/*   Updated: 2024/11/07 20:39:04 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));
    AForm* f1 = new ShrubberyCreationForm();
    AForm* f2 = new RobotomyRequestForm();
    AForm* f3 = new PresidentialPardonForm();
    Bureaucrat bob("Bob", 1), rob("Rob", 150);

    /* trying to sign forms with invalid grade */
    for (AForm* form : {f1, f2, f3}) {
        try {
            form->beSigned(rob);
        } catch (std::exception& e) {
            std::cerr << e.what();
        }
    }
    std::cout << std::endl;

    /* signing and executing all forms successfully */
    for (AForm* form : {f1, f2, f3}) {
        try {
            form->beSigned(bob);
            bob.executeForm(*form);
            std::cout << std::endl;
        } catch (std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    /* trying to execute forms with invalid grade */
    for (AForm* form : {f1, f2, f3}) {
        try {
            rob.executeForm(*form);
        } catch (std::exception& e) {
            std::cerr << e.what();
        }
    }
    std::cout << std::endl;
    
    delete f1;
    delete f2;
    delete f3;
}
