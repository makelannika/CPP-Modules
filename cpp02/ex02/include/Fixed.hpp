/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:37:07 by amakela           #+#    #+#             */
/*   Updated: 2024/09/06 13:45:53 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int                 value;
        static const int    frac_bits;

    public:
        Fixed();
        ~Fixed();

        Fixed(const Fixed& obj);
        Fixed(const int value);
        Fixed(const float value);

        Fixed&  operator=(const Fixed& obj);
        
        bool    operator>(const Fixed& obj) const;
        bool    operator<(const Fixed& obj) const;
        bool    operator>=(const Fixed& obj) const;
        bool    operator<=(const Fixed& obj) const;
        bool    operator==(const Fixed& obj) const;
        bool    operator!=(const Fixed& obj) const;
        
        Fixed   operator+(const Fixed& obj) const;
        Fixed   operator-(const Fixed& obj) const;
        Fixed   operator*(const Fixed& obj) const;
        Fixed   operator/(const Fixed& obj) const;
        
        Fixed&  operator++(void);
        Fixed   operator++(int);
        Fixed&  operator--(void);
        Fixed   operator--(int);

        static Fixed&          min(Fixed& obj1, Fixed& obj2);
        static const Fixed&    min(const Fixed& obj1, const Fixed& obj2);
        static Fixed&          max(Fixed& obj1, Fixed& obj2);
        static const Fixed&    max(const Fixed& obj1, const Fixed& obj2);

        int     getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream&   operator<<(std::ostream &out, const Fixed& obj);

#endif
