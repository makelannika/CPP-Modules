/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:21:19 by amakela           #+#    #+#             */
/*   Updated: 2024/08/28 21:32:33 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource*	source = new MateriaSource();
	
	/* learning a nullptr */
	source->learnMateria(nullptr);

	/* learn more than 4 materias */
	for (int i = 0; i < 3; i++) {
		source->learnMateria(new Ice());
		source->learnMateria(new Cure());
	}
	std::cout << std::endl;
	
	ICharacter*		bobby = new Character("bobby");
	ICharacter*		karen = new Character("Karen");

	/* equip more than 4 materias */
	bobby->equip(source->createMateria("ice"));
	bobby->equip(source->createMateria("cure"));
	bobby->equip(source->createMateria("ice"));
	bobby->equip(source->createMateria("ice"));
	bobby->equip(source->createMateria("ice"));
	/* equip nullptr */
	bobby->equip(nullptr);
	std::cout << std::endl;

	karen->equip(source->createMateria("cure"));
	karen->equip(source->createMateria("ice"));
	/* create materia that doesn't exist */
	karen->equip(source->createMateria("fire"));
	std::cout << std::endl;

	/* use materias */
	bobby->use(0, *karen);
	bobby->use(1, *karen);
	bobby->use(-1, *bobby);
	std::cout << std::endl;

	karen->use(1, *bobby);
	karen->use(3, *bobby);
	karen->use(9, *bobby);
	std::cout << std::endl;
	
	/* unequip materias */
	bobby->unequip(4);
	bobby->unequip(3);
	bobby->unequip(2);
	bobby->unequip(1);
	bobby->unequip(0);
	bobby->unequip(0);
	std::cout << std::endl;

	/* create & equip another materia to unequip more than 4 */
	bobby->equip(source->createMateria("ice"));
	bobby->unequip(0);
	std::cout << std::endl;

	/* assign character to another (bobby's inventory is empty)*/
	*(static_cast<Character*>(bobby)) = *(static_cast<Character*>(karen));
	bobby->use(0, *karen);
	std::cout << std::endl;

	delete source;
	delete bobby;
	delete karen;

	return 0;
}
