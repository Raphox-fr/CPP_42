/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:26 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/02 15:51:32 by rafaria          ###   ########.fr       */
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
        Fixed(const Fixed& arg);
        Fixed& operator=(const Fixed& arg);
        
        Fixed(const int a);
        Fixed(const float a);
		float toFloat( void ) const ;
		int toInt( void ) const;
		
		private:
        	int _value;
            const static int lapuissance = 256;

		
};
	
std::ostream& operator<<(std::ostream& os, const Fixed& arg);

#endif
