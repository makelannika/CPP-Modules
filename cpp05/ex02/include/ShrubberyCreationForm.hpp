/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:38:39 by amakela           #+#    #+#             */
/*   Updated: 2024/11/07 17:43:11 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>
#include <iostream>
#include <string>

class ShrubberyCreationForm : public AForm {
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm() override;

        ShrubberyCreationForm(const ShrubberyCreationForm& obj);
        ShrubberyCreationForm&  operator=(const ShrubberyCreationForm& obj);

        void	execute(Bureaucrat& executor) const override;
};

#endif
