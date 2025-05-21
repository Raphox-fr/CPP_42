/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/21 18:01:18 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"


#include <iostream>
int main( void )
{
    Fixed a;
    Fixed b( a );
    Fixed c;
    
    c = b;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    // a.setRawBits(23);
    // Fixed q ( a );
    // Fixed g;
    // g = q;

    // std::cout << a.getRawBits() << std::endl;
    // std::cout << q.getRawBits() << std::endl;
    // std::cout << g.getRawBits() << std::endl;

    return 0;
}
// int main()
// {
//     int i;

//     i = 0;
//     Fixed a;

//     Fixed b ( a );

//     // std::cout << "a = "<< a.value << std::endl;
//     // std::cout << "b = " << b.value << std::endl;
//     return (-1);
// }