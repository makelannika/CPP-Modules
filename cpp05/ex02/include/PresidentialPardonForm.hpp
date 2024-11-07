/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:16:19 by amakela           #+#    #+#             */
/*   Updated: 2024/11/07 20:47:38 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>

class PresidentialPardonForm : public AForm {
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm() override;

        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm&  operator=(const PresidentialPardonForm& obj);

        void	execute(Bureaucrat& executor) const override;
};

#endif
