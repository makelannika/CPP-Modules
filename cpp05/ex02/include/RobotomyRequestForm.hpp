/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:39:49 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 13:19:34 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm() override;
        RobotomyRequestForm(const RobotomyRequestForm& obj);
        RobotomyRequestForm&  operator=(const RobotomyRequestForm& obj) = delete;

        RobotomyRequestForm(std::string target);

        void	execute(Bureaucrat& executor) const override;
};

#endif
