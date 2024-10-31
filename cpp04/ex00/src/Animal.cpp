/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:08:15 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 01:47:27 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal constructor called" <<std::endl;
    type = "unknown animal";
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& obj) {
    std::cout << "Animal copy constructor called" << std::endl;
    type = obj.type;
}

Animal& Animal::operator=(const Animal& obj) {
    if (this != &obj)
        type = obj.type;
    return *this;
}

std::string Animal::getType() const {
    return type;
}

void    Animal::makeSound() const {
    std::cout << "unidentified animal sound" << std::endl;
}
