/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:16:33 by amakela           #+#    #+#             */
/*   Updated: 2024/09/30 16:02:58 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	/* creating an array of Animals, 3 cats & 3 dogs */
	const Animal*	animals[6];
	for (int i = 0; i < 3; i++)
		animals[i] = new Cat();
	for (int i = 3; i < 6; i++)
		animals[i] = new Dog();
    std::cout << std::endl;

    /* makeSound for each Animal on the array */
	for (int i = 0; i < 6; i++)
		animals[i]->makeSound();
	std::cout << std::endl;

    /* deleting all Animals on the array*/
	for (int i = 0; i < 6; i++)
		delete animals[i]; 
	std::cout << std::endl;

    /* creating 2 Animals */
	Animal* cat	= new Cat();
	Animal*	anotherCat = new Cat();
	std::cout << std::endl;

	/* assigning an Animal to another */
	*(static_cast<Cat*>(cat)) = *(static_cast<Cat*>(anotherCat));
	std::cout << std::endl;

    /* deleting two separate Animals (deep copied) */
	delete cat;
	delete anotherCat;

    return 0;
}
