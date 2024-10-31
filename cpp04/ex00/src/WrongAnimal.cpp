/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:02:06 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 01:48:43 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "Wrong animal constructor called" << std::endl;
    type = "wrong animal";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Wrong animal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
    std::cout << "Wrong animal copy constructor called" << std::endl;
    type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
    if (this != &obj)
        type = obj.type;
    return *this;
}

std::string WrongAnimal::getType() const {
    return type;
}

void    WrongAnimal::makeSound() const {
    std::cout << "i'm a wrong animal" << std::endl; 
}
