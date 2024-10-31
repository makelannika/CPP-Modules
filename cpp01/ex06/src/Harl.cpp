/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:13:20 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 13:54:06 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my"
    " 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money."
    << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free."
    << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, "
	"I want to speak to the manager now." << std::endl;
}

void    Harl::complain( char* level ) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
		if (level == levels[i]) {
        switch(i) {
            case DEBUG:
                debug();
                std::cout << std::endl;
            case INFO:
                info();
                std::cout << std::endl; 
            case WARNING:
                warning();
                std::cout << std::endl;
            case ERROR:
                error();
                std::cout << std::endl;
            return ;
            }
        }
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
