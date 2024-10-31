/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 00:21:57 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 19:31:36 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie( std::string name ) : name(name) {}

void Zombie::announce( void ) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " destroyed" << std::endl;
}
