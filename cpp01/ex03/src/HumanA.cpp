/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:07:29 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 13:58:46 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::~HumanA() {}

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

void    HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
