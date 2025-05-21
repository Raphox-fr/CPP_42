/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:10 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/21 18:00:06 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::~Fixed() {
    std::cout << "Default destructor called" << std::endl;
}


Fixed::Fixed(const Fixed& arg)
{
    *this = arg;
    std::cout << "Copy constructor called" << std::endl;
    std::cout << arg._value << std::endl;
}

int  Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void  Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}


Fixed &Fixed::operator=(const Fixed& arg)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = arg._value;
    return *this;
}