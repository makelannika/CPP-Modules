/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:23:21 by amakela           #+#    #+#             */
/*   Updated: 2024/08/14 21:24:16 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main() {
    Zombie* horde = zombieHorde(4, "Zombs");
    for (int i = 0; i < 4; i++)
        horde[i].announce();
    delete[](horde);
    return (0);
}
