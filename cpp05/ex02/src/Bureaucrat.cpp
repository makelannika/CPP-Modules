/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:19:56 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 13:15:09 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade given for bureaucrat is too low\n");
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade given for bureaucrat is too high\n");
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name), grade(obj.grade) {}

std::string	Bureaucrat::getName() const {
	return name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

void	Bureaucrat::incrementGrade() {
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException("Grade cannot be incremented\n");
	grade--;
}

void	Bureaucrat::decrementGrade() {
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException("Grade cannot be decremented\n");
	grade++;
}

void	Bureaucrat::signForm(AForm& form) {
	form.beSigned(*this);
	std::cout << name << " signed " + form.getName() + " form." << std::endl;
}

void	Bureaucrat::executeForm(AForm const & form) {
	form.execute(*this);
	std::cout << name + " executed " + form.getName() + " form." << std::endl;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string msg) {
	this->msg = msg;	
}

const char*	Bureaucrat::GradeTooHighException::what() const noexcept {
	return msg.c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string msg) {
	this->msg = msg;	
}

const char*	Bureaucrat::GradeTooLowException::what() const noexcept {
	return msg.c_str();
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj) {
	out << obj.getName() + ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return out;
}
