/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/02 15:59:14 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

#include <iostream>
int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

// int main(void)
// {
//     std::cout << "--- Constructeurs & toFloat/toInt ---" << std::endl;
//     Fixed a;                    // 0
//     Fixed b(10);                // 10.0
//     Fixed c(42.42f);            // 42.42
//     Fixed d(b);                 // Copie de b

//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;
//     std::cout << "c = " << c << std::endl;
//     std::cout << "d = " << d << std::endl;

//     std::cout << "\ntoInt():\n";
//     std::cout << "b.toInt() = " << b.toInt() << std::endl;
//     std::cout << "c.toInt() = " << c.toInt() << std::endl;

//     std::cout << "\n--- Affectation ---" << std::endl;
//     a = Fixed(1234.4321f);
//     std::cout << "a = " << a << std::endl;

//     std::cout << "\n--- Comparaisons ---" << std::endl;
//     std::cout << "a > b : " << (a > b) << std::endl;
//     std::cout << "a < b : " << (a < b) << std::endl;
//     std::cout << "a >= b : " << (a >= b) << std::endl;
//     std::cout << "a <= b : " << (a <= b) << std::endl;
//     std::cout << "a == b : " << (a == b) << std::endl;
//     std::cout << "a != b : " << (a != b) << std::endl;

//     std::cout << "\n--- Arithmétique ---" << std::endl;
//     Fixed e = Fixed(5.05f);
//     Fixed f = Fixed(2);
//     std::cout << "e = " << e << ", f = " << f << std::endl;
//     std::cout << "e + f = " << (e + f) << std::endl;
//     std::cout << "e - f = " << (e - f) << std::endl;
//     std::cout << "e * f = " << (e * f) << std::endl;
//     std::cout << "e / f = " << (e / f) << std::endl;

//     std::cout << "\n--- Incrémentation ---" << std::endl;
//     Fixed g;
//     std::cout << "g = " << g << std::endl;
//     std::cout << "++g = " << ++g << std::endl;
//     std::cout << "g = " << g << std::endl;
//     std::cout << "g++ = " << g++ << std::endl;
//     std::cout << "g = " << g << std::endl;
//     std::cout << "--g = " << --g << std::endl;
//     std::cout << "g = " << g << std::endl;
//     std::cout << "g-- = " << g-- << std::endl;
//     std::cout << "g = " << g << std::endl;

//     std::cout << "\n--- Min & Max ---" << std::endl;
//     Fixed h(3.3f);
//     Fixed i(5.5f);
//     const Fixed j(42.0f);
//     const Fixed k(1.0f);

//     std::cout << "min(h, i) = " << Fixed::min(h, i) << std::endl;
//     std::cout << "max(h, i) = " << Fixed::max(h, i) << std::endl;
//     std::cout << "min(j, k) = " << Fixed::min(j, k) << std::endl;
//     std::cout << "max(j, k) = " << Fixed::max(j, k) << std::endl;

//     return 0;
// }
