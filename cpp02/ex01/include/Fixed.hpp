/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:37:07 by amakela           #+#    #+#             */
/*   Updated: 2024/08/26 13:01:58 by amakela          ###   ########.fr       */
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
        
        Fixed& operator=(const Fixed& obj);

        int     getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream&   operator<<(std::ostream &out, const Fixed& obj);

#endif
