/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:24:29 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 19:43:50 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
    private:
        std::string name;
    
    public:
        Zombie();
        ~Zombie();

        Zombie( std::string name );
		
        void announce( void );
};

Zombie* zombieHorde( int n, std::string name );

#endif
