/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:09:32 by amakela           #+#    #+#             */
/*   Updated: 2024/10/31 20:02:09 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat {
	private:
		const std::string	name;
		unsigned int		grade;
		
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, unsigned int grade);
		~Bureaucrat();
		
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat&	operator=(const Bureaucrat& obj);
		
		
		const std::string	getName() const;
		unsigned int		getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

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
