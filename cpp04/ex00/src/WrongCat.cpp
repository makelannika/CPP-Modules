/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 01:07:46 by amakela           #+#    #+#             */
/*   Updated: 2024/09/30 12:33:17 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "Wrong cat constructor called" << std::endl;
    type = "wrong cat";
}

WrongCat::~WrongCat() {
    std::cout << "Wrong cat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj) {
    std::cout << "Wrong cat copy constructor called" <<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj) {
    if (this != &obj)
        WrongAnimal::operator=(obj);
    return *this;
}

void    WrongCat::makeSound() const {
    std::cout << "i'm a wrong cat" << std::endl; 
}
