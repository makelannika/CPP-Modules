/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:03:51 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 13:58:53 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class   HumanA {
    private:
        std::string name;
        Weapon&		weapon;

    public:
        ~HumanA();
        
        HumanA( std::string name, Weapon &weapon );
		
        void    attack();
};

#endif
