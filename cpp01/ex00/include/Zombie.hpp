/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 00:16:42 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 19:31:14 by amakela          ###   ########.fr       */
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
        
        Zombie( std::string name);
		
        void announce( void );
};
        
Zombie* newZombie( std::string name );
void 	randomChump( std::string name );

#endif
