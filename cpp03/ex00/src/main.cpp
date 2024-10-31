/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:50:11 by amakela           #+#    #+#             */
/*   Updated: 2024/09/26 00:28:04 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main() {
    ClapTrap rob("Rob");
    ClapTrap bobby("Bobby");
    ClapTrap alsoRob = rob;
    ClapTrap clapTrap;
    std::cout << std::endl;

    alsoRob.attack("Bobby");
    bobby.takeDamage(0);
    std::cout << std::endl;

    bobby.beRepaired(2);
    bobby.attack("Rob");
    alsoRob.takeDamage(0);
    bobby.attack("Rob");
    alsoRob.takeDamage(0);
    bobby.attack("Rob");
    alsoRob.takeDamage(0);
    bobby.attack("Rob");
    alsoRob.takeDamage(0);
    bobby.attack("Rob");
    alsoRob.takeDamage(0);
    bobby.attack("Rob");
    alsoRob.takeDamage(0);
    bobby.attack("Rob");
    alsoRob.takeDamage(0);
    bobby.attack("Rob");
    alsoRob.takeDamage(0);
    bobby.attack("Rob");
    alsoRob.takeDamage(0);
    bobby.attack("Rob");
    std::cout << std::endl;

    bobby.takeDamage(8);
    bobby.beRepaired(2);
    bobby.takeDamage(6);
    alsoRob.takeDamage(12);
    alsoRob.takeDamage(2);
    clapTrap.takeDamage(10);
    std::cout << std::endl;

    return (0);
}
