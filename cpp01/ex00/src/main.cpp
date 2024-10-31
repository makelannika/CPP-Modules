/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 00:36:21 by amakela           #+#    #+#             */
/*   Updated: 2024/08/14 21:14:25 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main() {
    Zombie* zombie1 = newZombie("Zombie1");
    zombie1->announce();
    randomChump("Zombie2");
    delete(zombie1);
    return (0);
}
