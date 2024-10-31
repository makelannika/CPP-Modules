/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:24:25 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 19:43:58 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {}

Zombie::Zombie( std::string name ) : name(name) {}

void Zombie::announce( void ) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
