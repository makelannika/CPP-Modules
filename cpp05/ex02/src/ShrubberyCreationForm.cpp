/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:52:53 by amakela           #+#    #+#             */
/*   Updated: 2024/11/07 18:41:38 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm::AForm("shrubbery", "target", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm::AForm("shrubbery", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : AForm::AForm(obj) {}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
    if (this != &obj)
        AForm::operator=(obj);
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat& executor) const {
    AForm::execute(executor);
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
