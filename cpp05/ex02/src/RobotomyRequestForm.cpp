/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:39:47 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 13:20:44 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm("robotomy", "Target", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm::AForm("robotomy", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm::AForm(obj) {}

void	RobotomyRequestForm::execute(Bureaucrat& executor) const {
	if (!this->getStatus())
		throw AForm::UnAuthorizedException(this->getName() + " form is not signed to be executed.\n");
	if (executor.getGrade() > this->getGradeToExec())
		throw AForm::UnAuthorizedException(executor.getName() + "'s grade is not high enough to execute " + this->getName() + " form.\n");
    std::cout << "Drilling noises... " << std::endl;
    if ((rand() % 2))
        std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}
