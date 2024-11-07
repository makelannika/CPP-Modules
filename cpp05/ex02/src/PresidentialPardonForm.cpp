/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:16:22 by amakela           #+#    #+#             */
/*   Updated: 2024/11/07 18:42:58 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm::AForm("presidential", "Target", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm::AForm("presidential", target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm::AForm(obj) {}

PresidentialPardonForm&  PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
    if (this != &obj)
        AForm::operator=(obj);
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat& executor) const {
    AForm::execute(executor);
    std::cout << this->getTarget() + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
