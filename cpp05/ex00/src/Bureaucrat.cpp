/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:19:56 by amakela           #+#    #+#             */
/*   Updated: 2024/10/31 20:11:18 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade given is too low");
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade given is too high");
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
	Bureaucrat(obj.getName(), obj.getGrade());
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj) {
	if (this != &obj)
		grade = obj.getGrade();
	return *this;
}

const std::string	Bureaucrat::getName() const {
	return name;
}

unsigned int	Bureaucrat::getGrade() const {
	return grade;
}

void	Bureaucrat::incrementGrade() {
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException("Grade cannot be incremented");
	grade--;
}

void	Bureaucrat::decrementGrade() {
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException("Grade cannot be decremented");
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
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return out;
}
