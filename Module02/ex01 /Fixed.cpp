/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:10 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/02 15:54:52 by rafaria          ###   ########.fr       */
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
    std::cout << "Copy constructor called" << std::endl;
    *this = arg;
}


Fixed::Fixed(const float a)
{
    this->_value = roundf(a * (int)this->lapuissance);
    std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(const int a)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = a * (int)this->lapuissance;
}

float Fixed::toFloat( void ) const
{
    float result;
    float diviser = this->lapuissance; 
    float value = this->_value;
    result = value / diviser;
    return (result);
}

int Fixed::toInt( void ) const
{
    return (this->_value / (int)this->lapuissance );
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

