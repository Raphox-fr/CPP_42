/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:26 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/02 14:35:38 by rafaria          ###   ########.fr       */
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
        Fixed(const Fixed &arg);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        Fixed &operator=(const Fixed &arg);

    private:
        int _value;
};

#endif
