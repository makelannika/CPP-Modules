/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:38:27 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 00:46:24 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();

        Animal(const Animal& obj);

        Animal& operator=(const Animal& obj);

        std::string     getType() const;
        virtual void    makeSound() const;
};

#endif
