/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:09:32 by amakela           #+#    #+#             */
/*   Updated: 2024/11/08 13:59:37 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class AForm;

class Bureaucrat {
	private:
		const std::string	name;
		int					grade;
		
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat&	operator=(const Bureaucrat& obj);
		
		const std::string	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(AForm& form);
		void				executeForm(AForm const & form);

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
				const char* what() const noexcept override;
		};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& obj);

#endif
