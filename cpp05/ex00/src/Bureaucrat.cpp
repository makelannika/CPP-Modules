/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:19:56 by amakela           #+#    #+#             */
/*   Updated: 2024/11/08 12:27:18 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade given for bureaucrat is too low\n");
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade given for bureaucrat is too high\n");
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name), grade(obj.grade) {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj) {
	if (this != &obj)
		grade = obj.grade;
	return *this;
}

const std::string	Bureaucrat::getName() const {
	return name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

void	Bureaucrat::incrementGrade() {
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException("Bureaucrat grade cannot be incremented\n");
	grade--;
}

void	Bureaucrat::decrementGrade() {
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException("Bureaucrat grade cannot be decremented\n");
	grade++;
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
