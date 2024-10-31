/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 22:45:37 by amakela           #+#    #+#             */
/*   Updated: 2024/09/06 13:56:00 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;

    // std::cout << a * a << std::endl;
    // std::cout << a / a << std::endl;
    // std::cout << b + b << std::endl;
    // std::cout << b - b << std::endl;
    
    // if (b != a)
    //     std::cout << b << " and " << a << " are not equal" << std::endl;
    // if (b > a)
    //     std::cout << b << " is greater than " << a << std::endl;
    // a = b;
    // if (b == a)
    //     std::cout << "b: " << b << " and a: " << a << " are equal" << std::endl;
        
    return (0);
}
