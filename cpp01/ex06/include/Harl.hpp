/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:13:15 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 20:15:45 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );

		enum {DEBUG, INFO, WARNING, ERROR};

    public:
        Harl();
        ~Harl();
		
        void    complain( char* level );
};

#endif
