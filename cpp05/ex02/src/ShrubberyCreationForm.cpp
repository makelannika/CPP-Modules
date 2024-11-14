/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:52:53 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 13:21:10 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("shrubbery", "target", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("shrubbery", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm::AForm(obj) {}

void    ShrubberyCreationForm::execute(Bureaucrat& executor) const {
	if (!this->getStatus())
		throw AForm::UnAuthorizedException(this->getName() + " form is not signed to be executed.\n");
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::UnAuthorizedException(executor.getName() + "'s grade is not high enough to execute " + this->getName() + " form.\n");
    std::ofstream file;
    file.open(this->getTarget() + "_shrubbery");
    if (file.is_open()) {
        file << "               "  << std::endl;
        file << "           *   "  << std::endl;
        file << "   *      ***  "  << std::endl;
        file << "  ***    ***** "  << std::endl;
        file << " *****  *******"  << std::endl;
        file << "...|.......|..."  << std::endl;
        file.close();
        std::cout << "Shrubbery has been planted" << std::endl;
        return ;
    }
    std::cout << "Could not open file " + this->getTarget() + "_shrubbery." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
