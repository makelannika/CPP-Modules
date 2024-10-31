/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:37:30 by amakela           #+#    #+#             */
/*   Updated: 2024/09/06 13:46:09 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->value = value << frac_bits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << frac_bits));
}

Fixed::Fixed(const Fixed& obj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        value = obj.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

int Fixed::toInt(void) const {
    return (value >> frac_bits);
}

float   Fixed::toFloat(void) const {
    return (value / (float)(1 << frac_bits));
}

std::ostream&   operator<<(std::ostream &out, const Fixed& obj) {
    out << obj.toFloat();
    return (out);
}

bool    Fixed::operator>(const Fixed& obj) const {
    return (value > obj.getRawBits());
}

bool    Fixed::operator<(const Fixed& obj) const {
    return (value < obj.getRawBits());
}

bool    Fixed::operator>=(const Fixed& obj) const {
    return (value >= obj.getRawBits());
}

bool    Fixed::operator<=(const Fixed& obj) const {
    return (value <= obj.getRawBits());
}

bool    Fixed::operator==(const Fixed& obj) const {
    return (value == obj.getRawBits());
}

bool    Fixed::operator!=(const Fixed& obj) const {
    return (value != obj.getRawBits());
}

Fixed   Fixed::operator+(const Fixed& obj) const {
    Fixed   res;

    res.setRawBits(value + obj.getRawBits());
    return (res);
}

Fixed   Fixed::operator-(const Fixed& obj) const {
    Fixed   res;

    res.setRawBits(value - obj.getRawBits());
    return (res);
}

Fixed   Fixed::operator*(const Fixed& obj) const {
    Fixed   res;

    res.setRawBits((value * obj.getRawBits()) >> 8);
    return (res);
}

Fixed   Fixed::operator/(const Fixed& obj) const {
    Fixed   res;

    if (obj.getRawBits() == 0) {
        std::cout << "Error: cannot do division by 0" << std::endl;
        return (res);
    }
    res.setRawBits((value << frac_bits) / obj.getRawBits());
    return (res);
}

Fixed&  Fixed::operator++(void) {
    value++;
    return (*this);
}

Fixed   Fixed::operator++(int) {
    Fixed   prev;

    prev = *this;
    value++;
    return (prev);
}

Fixed&  Fixed::operator--(void) {
    value--;
    return (*this);
}

Fixed   Fixed::operator--(int) {
    Fixed   prev;

    prev = *this;
    value--;
    return (prev);
}

Fixed&  Fixed::min(Fixed& obj1, Fixed& obj2) {
    return (obj1 <= obj2 ? obj1 : obj2);
}

const Fixed&    Fixed::min(const Fixed& obj1, const Fixed& obj2) {
    return (obj1 <= obj2 ? obj1 : obj2);
}

Fixed&  Fixed::max(Fixed& obj1, Fixed& obj2) {
    return (obj1 >= obj2 ? obj1 : obj2);
}

const Fixed&    Fixed::max(const Fixed& obj1, const Fixed& obj2) {
    return (obj1 >= obj2 ? obj1 : obj2);
}
