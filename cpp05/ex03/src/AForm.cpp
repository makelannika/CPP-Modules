/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:39:26 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 13:23:20 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : isSigned(false), gradeToSign(150), gradeToExec(150) {}

AForm::AForm(std::string name, std::string target, int toSign, int toExec) : name(name), target(target), isSigned(false), gradeToSign(toSign), gradeToExec(toExec) {
	if (toSign < 1)
		throw AForm::GradeTooHighException("Grade required to sign the form is too high\n");
	if (toExec < 1)
		throw AForm::GradeTooHighException("Grade required to execute the form is too high\n");
	if (toSign > 150)
		throw AForm::GradeTooLowException("Grade required to sign the form is too low\n");
	if (toExec > 150)
		throw AForm::GradeTooLowException("Grade required to execute the form is too low\n");
}

AForm::AForm(const AForm& obj) : name(obj.name), target(obj.target), isSigned(obj.isSigned), gradeToSign(obj.gradeToSign), gradeToExec(obj.gradeToExec) {}

std::string	AForm::getName() const {
	return name;
}

std::string	AForm::getTarget() const {
	return target;
}

bool	AForm::getStatus() const {
	return isSigned;
}

int	AForm::getGradeToSign() const {
	return gradeToSign;
}

int	AForm::getGradeToExec() const {
	return gradeToExec;	
}

void	AForm::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > gradeToSign)
		throw AForm::GradeTooLowException(bureaucrat.getName() + "'s grade is too low to sign " + name + " form.\n");
	isSigned = true;
	std::cout << bureaucrat.getName() + " signed " + name + " form." << std::endl;
}

AForm::~AForm() {}

AForm::GradeTooHighException::GradeTooHighException(std::string msg) {
	this->msg = msg;	
}

const char*	AForm::GradeTooHighException::what() const noexcept {
	return msg.c_str();
}

AForm::GradeTooLowException::GradeTooLowException(std::string msg) {
	this->msg = msg;	
}

const char*	AForm::GradeTooLowException::what() const noexcept {
	return msg.c_str();
}

AForm::UnAuthorizedException::UnAuthorizedException(std::string msg) {
	this->msg = msg;	
}

const char*	AForm::UnAuthorizedException::what() const noexcept {
	return msg.c_str();
}

std::ostream&	operator<<(std::ostream& out, const AForm& obj) {
	std::cout << std::boolalpha;
	out << "Form: " + obj.getName() << std::endl
	<< "Target: " + obj.getTarget() << std::endl
	<< "Signed: " << obj.getStatus() << std::endl
	<< "Grade to sign: " << obj.getGradeToSign() << std::endl
	<< "Grade to execute: " << obj.getGradeToExec() << std::endl;
	return out;
}
