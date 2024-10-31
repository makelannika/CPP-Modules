/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:39:59 by amakela           #+#    #+#             */
/*   Updated: 2024/09/30 13:04:38 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
	private:
		Brain*	brain;
		
    public:
        Dog();
        ~Dog() override;

        Dog(const Dog& obj);

        Dog& operator=(const Dog& obj);
        
        void  makeSound() const override;
};

#endif
