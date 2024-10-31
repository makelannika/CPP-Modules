/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:05:30 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 14:06:52 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::~HumanB() {}

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

void	HumanB::attack() {
	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " is not armed" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
