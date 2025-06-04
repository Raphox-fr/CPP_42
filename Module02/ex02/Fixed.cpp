/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:10 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/03 16:41:20 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() {
    this->_rawbits = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& arg)
{
    *this = arg;
}

Fixed::Fixed(const float a)
{
    this->_rawbits = roundf(a * (int)this->lapuissance);
}

Fixed::Fixed(const int a)
{
    this->_rawbits = a * (int)this->lapuissance;
}

float Fixed::toFloat( void ) const
{
    float result;
    float diviser = (int)this->lapuissance;
    float value = this->_rawbits;
    result = value / diviser;
    return (result);
}

int Fixed::toInt( void ) const
{
    return (this->_rawbits / (int)this->lapuissance);
}

int  Fixed::getRawBits(void) const
{
    return (this->_rawbits);
}

// plus et moins et egal --------------------------------------
Fixed &Fixed::operator=(const Fixed& arg)
{
    this->_rawbits = arg.getRawBits();
    return *this;
}

Fixed Fixed::operator+(const Fixed& arg)
{
    Fixed a;
    a._rawbits = this->getRawBits() + arg.getRawBits();
    return (a);
}

Fixed Fixed::operator-(const Fixed& arg)
{
    Fixed a;
    a._rawbits = this->getRawBits() - arg.getRawBits();
    return (a);
}


// ++a et --a   --------------------------------------
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->_rawbits++;
    return (temp);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->_rawbits--;
    return (temp);
}

// a++ et a--  --------------------------------------
Fixed &Fixed::operator++()
{
    this->_rawbits++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->_rawbits--;
    return (*this);
}

// multiplication et division --------------------------------------
Fixed Fixed::operator*(const Fixed& arg)
{
    float x = this->toFloat() * arg.toFloat();
    Fixed a(x);
    
    
    return (a);
}

Fixed Fixed::operator/(const Fixed& arg)
{
    float x = this->toFloat() / arg.toFloat();
    Fixed a(x);
    return (a);
}


// Comparaison --------------------------------------

bool Fixed::operator<(const Fixed& arg)
{
    if ((this->_rawbits - arg.getRawBits()) < 0)
        return (1);
    return (0);
}

bool Fixed::operator>(const Fixed& arg)
{
    if ((this->_rawbits - arg.getRawBits()) > 0)
        return (1);
    return (0);
}

bool Fixed::operator<=(const Fixed& arg)
{
    if ((this->_rawbits - arg.getRawBits()) <= 0)
        return (1);
    return (0);
}

bool Fixed::operator>=(const Fixed& arg)
{
    if ((this->_rawbits - arg.getRawBits()) >= 0)
        return (1);
    return (0);
}

bool Fixed::operator!=(const Fixed& arg)
{
    if (this->_rawbits != arg.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator==(const Fixed& arg)
{
    if (this->_rawbits == arg.getRawBits())
        return (1);
    return (0);
}


// max et min

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}



// Annexe --------------------------------------
std::ostream& operator<<(std::ostream& os, const Fixed& arg)
{
    os << arg.toFloat();
    return os;
}



