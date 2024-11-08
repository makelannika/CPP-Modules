/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:39:26 by amakela           #+#    #+#             */
/*   Updated: 2024/11/08 12:29:17 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : isSigned(false), gradeToSign(150), gradeToExec(150) {}

Form::Form(std::string name, int toSign, int toExec) : name(name), isSigned(false), gradeToSign(toSign), gradeToExec(toExec) {
	if (toSign < 1)
		throw Form::GradeTooHighException("Grade required to sign the form is too high\n");
	if (toExec < 1)
		throw Form::GradeTooHighException("Grade required to execute the form is too high\n");
	if (toSign > 150)
		throw Form::GradeTooLowException("Grade required to sign the form is too low\n");
	if (toExec > 150)
		throw Form::GradeTooLowException("Grade required to execute the form is too low\n");
}

Form::Form(const Form& obj) : name(obj.name), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExec(obj.gradeToExec) {}

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

int	Form::getGradeToSign() const {
	return gradeToSign;
}

int	Form::getGradeToExec() const {
	return gradeToExec;	
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
	<< "Grade to execute: " << obj.getGradeToExec() << std::endl;
	return out;
}
