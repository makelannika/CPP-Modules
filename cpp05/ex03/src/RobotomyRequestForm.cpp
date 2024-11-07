/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:39:47 by amakela           #+#    #+#             */
/*   Updated: 2024/11/07 23:13:29 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm::AForm("robotomy request", "Target", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm::AForm("robotomy request", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm::AForm(obj) {}

RobotomyRequestForm&  RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
    if (this != &obj)
        AForm::operator=(obj);
    return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat& executor) const {
    AForm::execute(executor);
    std::cout << "Drilling noises... " << std::endl;
    if ((rand() % 2))
        std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}
