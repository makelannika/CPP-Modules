/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:16:22 by amakela           #+#    #+#             */
/*   Updated: 2024/11/08 14:07:29 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm::AForm("presidential pardon", "Target", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm::AForm("presidential pardon", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm::AForm(obj) {}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
    if (this != &obj)
        AForm::operator=(obj);
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat& executor) const {
	if (!this->getStatus())
		throw AForm::UnAuthorizedException(this->getName() + " form is not signed to be executed.\n");
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::UnAuthorizedException(executor.getName() + "'s grade is not high enough to execute " + this->getName() + " form.\n");
    std::cout << this->getTarget() + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
