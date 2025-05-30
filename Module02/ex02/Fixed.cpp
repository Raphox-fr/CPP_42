/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:10 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/30 19:59:17 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// CONSTRUCTOR 

Fixed::Fixed() {
    this->_rawbits = 0;
}

int  Fixed::getRawBits(void) const
{
    return (this->_rawbits);
}


Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& arg)
{
    *this = arg;
}
Fixed &Fixed::operator=(const Fixed& arg)
{
    this->_rawbits = arg.getRawBits();
    return *this;
}


// -------------------------------------------

Fixed::Fixed(const float a)
{
    this->_rawbits = roundf(a * 256);
    
}

Fixed::Fixed(const int a)
{
    this->_rawbits = a * 256;
}

float Fixed::toFloat( void ) const
{
    float result;
    float diviser = 256; 
    float value = this->_rawbits;
    
    result = value / diviser;
    return (result);
}

int Fixed::toInt( void ) const
{
    return (this->_rawbits / 256 );
}

// rawbits ------------------------------------------

Fixed Fixed::operator+(const Fixed& arg)
{
    Fixed a;
    a._rawbits = this->toFloat() + arg.toFloat();
    return (a);
}


Fixed Fixed::operator-(const Fixed& arg)
{
    Fixed a;
    a._rawbits = this->toFloat() - arg.toFloat();
    return (a);
}


Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->_rawbits++;
    return (temp);
}

Fixed &Fixed::operator++()
{
    this->_rawbits++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    Fixed *a;
    a->_rawbits = this->toFloat() - 1;
    return (*a);
}

// No rawbits ; recalculer valeur de depart ; ---------------------------------

Fixed &Fixed::operator*(const Fixed& arg)
{
    Fixed *a;
    a->_rawbits = this->_rawbits * arg.toFloat();
    return (*a);
}

Fixed &Fixed::operator/(const Fixed& arg)
{
    float result;
    result = (this->_rawbits / arg.toFloat());
    Fixed *a;
    return (*a);
    
}

std::ostream& operator<<(std::ostream& os, const Fixed& arg)
{
    // float result;
    // result = arg.toFloat();
    os << arg.toFloat();
    return os;
}

// bool Fixed::operator<=(const Fixed& arg)
// {
//     if (this->_rawbits - arg.toFloat() == 0)
//         return (1);
//     if (this->_rawbits - arg.toFloat() < 0)
//         return (1);
// 	return (0);
// }

// bool Fixed::operator>=(const Fixed& arg)
// {
//     if (this->_rawbits - arg.toFloat() == 0)
//         return (1);
//     if (this->_rawbits - arg.toFloat() > 0)
//         return (1);
// 	return (0);
// }
