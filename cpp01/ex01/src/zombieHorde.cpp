/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:24:17 by amakela           #+#    #+#             */
/*   Updated: 2024/08/14 21:23:10 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int n, std::string name ) {
    if (n < 1)
        return (NULL);
    Zombie* zombieHorde = new Zombie[n];
    for (int i = 0; i < n; i++)
        zombieHorde[i] = Zombie(name);
    return (zombieHorde);
}
