/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:33:26 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 13:32:28 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
    std::srand(static_cast<unsigned>(time(0)));
    Intern someRandomIntern;
    AForm* forms[4];
    std::string formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon", "meh"};
    
    /* intern creates forms */
    for (int i = 0; i < 4; i++)
        forms[i] = someRandomIntern.makeForm(formNames[i], "random target");
    std::cout << std::endl;
    
    /* printing info of created forms */
    for (AForm* form : forms) {
        if (form)
            std::cout << *form << std::endl;
    }

    for (int i = 0; i < 4; i++) {
        if (forms[i])
            delete forms[i];
    }
}
