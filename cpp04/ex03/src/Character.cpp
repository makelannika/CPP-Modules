/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:26:13 by amakela           #+#    #+#             */
/*   Updated: 2024/10/01 02:20:52 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	name = "unknown";
	dropped = new AMateria*[4]();
	nbDropped = 0;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (inventory[i])
			delete inventory[i];
	}
	for (int i = 0; i < nbDropped; i++) {
			delete dropped[i];
	}
	delete[] dropped;
}

Character::Character(const Character& obj) {
	name = obj.name;
	for (int i = 0; i < 4; i++) {
		if (obj.inventory[i])
			inventory[i] = obj.inventory[i]->clone();
	}
	dropped = new AMateria*[4]();
	nbDropped = 0;
}

Character::Character(std::string name) : name(name) {
	dropped = new AMateria*[4]();
	nbDropped = 0;
}

Character&	Character::operator=(const Character& obj) {
	if (this != &obj) {
		name = obj.name;
		for (int i = 0; i < 4; i++) {
			if (inventory[i])
				delete inventory[i];
			if (obj.inventory[i]) 
				inventory[i] = obj.inventory[i]->clone();
			else
				inventory[i] = nullptr;
		}
	}
	return *this;
}

std::string const &	Character::getName() const {
	return (name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			if (m)
				std::cout << m->getType() << " equipped" << std::endl;
			return ;
		}
	}
	if (m)
		std::cout << "inventory is full, cannot equip " << m->getType() << std::endl;
	delete m;
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
	{
		if (inventory[idx]) {
			if (nbDropped % 4 == 0) {
				AMateria **newDropped = new AMateria*[nbDropped + 4]();
				for (int i = 0; i < nbDropped; i++)
					newDropped[i] = dropped[i];
				delete[] dropped;
				dropped = newDropped;
			}
			dropped[nbDropped] = inventory[idx];
			inventory[idx] = nullptr;
			std::cout << dropped[nbDropped]->getType() << " unequipped" << std::endl;
			nbDropped++;
			return ;
		}
		std::cout << "no materia to unequip at index " << idx << std::endl; 
		return ;
	}
	std::cout << "invalid index" << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx <= 3) {
		if (inventory[idx])
			inventory[idx]->use(target);
		else
			std::cout << "no materia to use at index " << idx << std::endl; 
		return ;
	}
	std::cout << "invalid index" << std::endl;
}
