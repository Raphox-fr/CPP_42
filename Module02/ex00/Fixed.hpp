/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:26 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/21 17:49:03 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed& arg);
        Fixed& operator=(const Fixed& arg);
        
        int getRawBits( void ) const; //retourne la valeur du nombre à virgule fixe sans la convertir.
        void setRawBits( int const raw ); // initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
    private:
        int _value;
        
};

#endif
