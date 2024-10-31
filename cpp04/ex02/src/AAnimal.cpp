/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:08:15 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 18:09:14 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "Animal constructor called" <<std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj) {
    std::cout << "Animal copy constructor called" << std::endl;
    type = obj.type;
}

AAnimal& AAnimal::operator=(const AAnimal& obj) {
    if (this != &obj)
        type = obj.type;
    return *this;
}

std::string AAnimal::getType() const {
    return type;
}
