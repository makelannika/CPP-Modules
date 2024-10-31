/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:49:52 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 14:04:39 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
    private:
        std::string type;
    
    public:
        Weapon();
        ~Weapon();

        Weapon( std::string type );
		
        const std::string&  getType();
        void                setType( std::string type );
};

#endif
