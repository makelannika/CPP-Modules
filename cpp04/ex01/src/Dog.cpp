/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:45:11 by amakela           #+#    #+#             */
/*   Updated: 2024/09/30 15:51:23 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called" <<std::endl;
    type = "dog";
	brain = new Brain();
}

Dog::~Dog() {
	delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj) {
    std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*obj.brain);
}

Dog& Dog::operator=(const Dog& obj) {
    if (this != &obj) {
        Animal::operator=(obj);
        delete brain;
		brain = new Brain(*obj.brain);
	}
    return *this;
}

void    Dog::makeSound() const {
    std::cout << "woof woof" << std::endl;
}
