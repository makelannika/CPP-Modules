/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:39:18 by amakela           #+#    #+#             */
/*   Updated: 2024/10/31 21:45:22 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form {
	private:
		const std::string	name;
		bool				isSigned;
		const unsigned int	gradeToSign;
		const unsigned int	gradeToExecute;

	public:
		Form();
		~Form();
		
		Form(const Form& obj);
		Form&	operator=(const Form& obj);
		
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
};

std::ostream&	operator<<(std::ostream& out, const Form& obj);

#endif