/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:10 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/26 16:52:04 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& arg)
{
    // *this = arg;
    std::cout << "Copy constructor called" << std::endl;
    this->_value = arg._value;
    // std::cout << arg._value << std::endl;
}


Fixed::Fixed(const float a)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(a * 256);
}
Fixed::Fixed(const int a)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = a * 256;
}

float Fixed::toFloat( void ) const
{
    float result;
    float diviser = 256; 
    float value = this->_value;
    
    result = value / diviser;
    return (result);
}

int Fixed::toInt( void ) const
{
    return (this->_value / 256 );
}


Fixed &Fixed::operator=(const Fixed& arg)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = arg._value;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& arg)
{
    float result;
    result = arg.toFloat();
    os << result;
    return os;
}

