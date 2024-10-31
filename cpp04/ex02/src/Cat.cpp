/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:55:01 by amakela           #+#    #+#             */
/*   Updated: 2024/09/30 15:57:08 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called" << std::endl;
    type = "cat";
	brain = new Brain();
}

Cat::~Cat() {
	delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : AAnimal(obj) {
    std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*obj.brain);
}

Cat& Cat::operator=(const Cat& obj) {
    if (this != &obj) {
        AAnimal::operator=(obj);
        delete brain;
		brain = new Brain(*obj.brain);
	}
    return *this;
}

void    Cat::makeSound() const {
    std::cout << "purr meow" << std::endl;
}
