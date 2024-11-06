/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:39:26 by amakela           #+#    #+#             */
/*   Updated: 2024/11/06 21:23:17 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : isSigned(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(std::string name, unsigned int toSign, unsigned int toExec)
: name(name), gradeToSign(toSign), gradeToExecute(toExec) {
	if (toSign < 1 || toExec < 1)
		throw Form::GradeTooHighException("Grade given is too high\n");
	if (toSign > 150 || toExec > 150)
		throw Form::GradeTooLowException("Grade given is too low\n");
}

Form::Form(const Form& obj) : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExecute(obj.gradeToExecute) {}

Form&	Form::operator=(const Form& obj) {
	if (this != &obj)
		isSigned = obj.isSigned;
	return *this;
}

const std::string	Form::getName() const {
	return name;
}

bool	Form::getStatus() const {
	return isSigned;
}

unsigned int	Form::getGradeToSign() const {
	return gradeToSign;
}

unsigned int	Form::getGradeToExecute() const {
	return gradeToExecute;	
}

void	Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > gradeToSign)
		throw Form::GradeTooLowException(bureaucrat.getName() + "'s grade is too low to sign form " + name + "\n");
	isSigned = true;
}

Form::~Form() {}

Form::GradeTooHighException::GradeTooHighException(std::string msg) {
	this->msg = msg;	
}

const char*	Form::GradeTooHighException::what() const noexcept {
	return msg.c_str();
}

Form::GradeTooLowException::GradeTooLowException(std::string msg) {
	this->msg = msg;	
}

const char*	Form::GradeTooLowException::what() const noexcept {
	return msg.c_str();
}

std::ostream&	operator<<(std::ostream& out, const Form& obj) {
	std::cout << std::boolalpha;
	out << "Form: " + obj.getName() << std::endl
	<< "Signed: " << obj.getStatus() << std::endl
	<< "Grade to sign: " << obj.getGradeToSign() << std::endl
	<< "Grade to execute: " << obj.getGradeToExecute() << std::endl;
	return out;
}
