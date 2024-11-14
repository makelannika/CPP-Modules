/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:16:19 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 13:18:17 by amakela          ###   ########.fr       */
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
        ~PresidentialPardonForm() override;
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm&  operator=(const PresidentialPardonForm& obj) = delete;

        PresidentialPardonForm(std::string target);

        void	execute(Bureaucrat& executor) const override;
};

#endif
