/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:55:55 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 01:01:53 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string type;

    public:
        WrongAnimal();
        virtual ~WrongAnimal();

        WrongAnimal(const WrongAnimal& obj);

        WrongAnimal& operator=(const WrongAnimal& obj);

        std::string     getType() const;
        virtual void    makeSound() const;
};

#endif