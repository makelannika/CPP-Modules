/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:19:17 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 13:55:12 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl {
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );

    public:
        Harl();
        ~Harl();

        void    complain( std::string level );
};

#endif
