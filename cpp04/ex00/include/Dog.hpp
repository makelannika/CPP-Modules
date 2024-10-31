/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:39:59 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 00:52:42 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
    public:
        Dog();
        ~Dog() override;

        Dog(const Dog& obj);

        Dog& operator=(const Dog& obj);
        
        void	makeSound() const override;
};

#endif
