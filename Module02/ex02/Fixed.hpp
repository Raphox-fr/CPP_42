/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:26 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/02 11:57:33 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &arg);
        
        Fixed(const int a);
        Fixed(const float a);
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;

        // plus , moins et egal
        Fixed &operator=(const Fixed &arg);
        Fixed operator+(const Fixed &arg);
        Fixed operator-(const Fixed &arg);
        
        // Pre-incrementation ++a et --a  
        Fixed operator++(int);
        Fixed operator--(int);
        
        // Post-incrementation a++ et a--
        Fixed &operator++();
        Fixed &operator--();

        // Multiplication et division
        Fixed operator*(const Fixed &arg);
        Fixed operator/(const Fixed &arg);
        
        // Comparaison
        bool operator>(const Fixed& arg);
        bool operator<(const Fixed& arg);
        bool operator>=(const Fixed& arg);
        bool operator<=(const Fixed& arg);
        bool operator==(const Fixed& arg);
        bool operator!=(const Fixed& arg);

        // Max et Min
        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);

    private:
        int _rawbits;
};

std::ostream &operator<<(std::ostream &os, const Fixed &arg);

#endif
