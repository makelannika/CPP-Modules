/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:39:18 by amakela           #+#    #+#             */
/*   Updated: 2024/11/08 12:31:14 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	name;
		const std::string	target;
		bool				isSigned;
		const int			gradeToSign;
		const int			gradeToExec;
		AForm();

	protected:
		AForm(std::string name, std::string target, int toSign, int toExec);
		AForm(const AForm& obj);

	public:
		virtual ~AForm();
		
		AForm&	operator=(const AForm& obj);

		const std::string	getName() const;
		const std::string	getTarget() const;
		bool				getStatus() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		void				beSigned(Bureaucrat& bureaucrat);
		virtual void		execute(Bureaucrat& executor) const;
		
		class GradeTooHighException : public std::exception {
			private:
				std::string	msg;
			public:
				GradeTooHighException(std::string msg);
				const char* what() const noexcept override;
		};

		class GradeTooLowException : public std::exception {
			private:
				std::string	msg;
			public:
				GradeTooLowException(std::string msg);
				const char*	what() const noexcept override;
		};

		class UnAuthorizedException : public std::exception {
			private:
				std::string msg;
			public:
				UnAuthorizedException(std::string msg);
				const char*	what() const noexcept override;
		};
};

std::ostream&	operator<<(std::ostream& out, const AForm& obj);

#endif
