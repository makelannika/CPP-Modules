/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:05:33 by amakela           #+#    #+#             */
/*   Updated: 2024/11/07 22:37:19 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern&) {}

Intern& Intern::operator=(const Intern&) {
    return *this;
}

AForm*  Intern::makeForm(std::string name, std::string target) {
    std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++) {
        if (name == forms[i]) {
            std::cout << "Intern creates " + name + " form." << std::endl;
            switch(i) {
                case 0:
                    return new ShrubberyCreationForm(target);
                case 1:
                    return new RobotomyRequestForm(target);
                case 2:
                    return new PresidentialPardonForm(target);
            }
        }
    }
    std::cerr << "Form '" + name + "' doesn't exist." << std::endl;
    return nullptr;
}

Intern::~Intern() {}
