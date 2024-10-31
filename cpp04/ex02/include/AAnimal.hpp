/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:38:27 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 18:07:43 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string type;

    public:
        AAnimal();
        virtual ~AAnimal();

        AAnimal(const AAnimal& obj);

        AAnimal& operator=(const AAnimal& obj);

        std::string     getType() const;
        virtual void    makeSound() const = 0;
};

#endif
