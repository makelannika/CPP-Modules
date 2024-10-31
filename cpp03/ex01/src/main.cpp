/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:50:11 by amakela           #+#    #+#             */
/*   Updated: 2024/09/27 00:41:37 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main() {
    ClapTrap rob("Rob");
    ClapTrap bobby("Bobby");
    std::cout << std::endl;

    ScavTrap sally("Sally");
    std::cout << std::endl;

    ScavTrap sophie;
    std::cout << std::endl;

    sophie = sally;
    std::cout << std::endl;
    
    ScavTrap selma(sophie);
    std::cout << std::endl;

    rob.attack("Bobby");
    bobby.takeDamage(0);
    std::cout << std::endl;

    bobby.attack("Rob");
    rob.takeDamage(0);
    std::cout << std::endl;

    sally.attack("Rob");
    rob.takeDamage(20);
    std::cout << std::endl;

    bobby.beRepaired(3);
    bobby.beRepaired(3);
    bobby.beRepaired(3);
    bobby.beRepaired(3);
    std::cout << std::endl;

    sally.attack("Bobby");
    bobby.takeDamage(20);
    sally.attack("Bobby");
    bobby.takeDamage(20);
    std::cout << std::endl;

    sally.guardGate();
    selma.guardGate();
    std::cout << std::endl;
    return (0);
}
