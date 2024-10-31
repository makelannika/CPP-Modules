/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:16:33 by amakela           #+#    #+#             */
/*   Updated: 2024/09/30 12:39:57 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	/* creating Animal & WrongAnimal pointers */
    const Animal* animal1 = new Animal();
    const Animal* animal2 = new Dog();
    const Animal* animal3 = new Cat();
    const WrongAnimal* wrong1 = new WrongAnimal();
    const WrongAnimal* wrong2 = new WrongCat();
    std::cout << std::endl;

	/* creatig a WrongCat */
	WrongCat	wrongCat;
	std::cout << std::endl;

    /* printing the type of each Animal */
    std::cout << "animal1 is an " << animal1->getType() << std::endl;
    std::cout << "animal2 is a " << animal2->getType() << std::endl;
    std::cout << "animal3 is a " << animal3->getType() << std::endl;
    std::cout << "wrong1 is a " << wrong1->getType() << std::endl;
    std::cout << "wrong2 is a " << wrong2->getType() << std::endl;
    std::cout << std::endl;
    
	/* each Animal makes their sound */
    std::cout << animal1->getType() << ": ";
    animal1->makeSound();
    std::cout << animal2->getType() << ": ";
    animal2->makeSound();
    std::cout << animal3->getType() << ": ";
    animal3->makeSound();
	std::cout << std::endl;

	/* WrongAnimal* makes WrongAnimal sound */
    std::cout << wrong1->getType() << ": ";
    wrong1->makeSound();
    std::cout << wrong2->getType() << ": ";
    wrong2->makeSound();
	std::cout << std::endl;

	/* WrongCat makes WrongCat sound */
	std::cout << wrongCat.getType() << ": ";
	wrongCat.makeSound();
    std::cout << std::endl;

    /* deleting all Animals */
    delete animal1;
    delete animal2;
    delete animal3;
    delete wrong1;
    delete wrong2;
    
    return 0;
}
