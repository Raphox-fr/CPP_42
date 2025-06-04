/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/03 16:11:26 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"


#include "ClapTrap.hpp"

int main()
{
    ClapTrap bob("Bob");
    ClapTrap alice("Alice");

    std::cout << "\n--- TEST 1 : Bob attaque Alice ---" << std::endl;
    bob.attack("Alice");

    std::cout << "\n--- TEST 2 : Alice prend 4 dégâts ---" << std::endl;
    alice.takeDamage(4);

    std::cout << "\n--- TEST 3 : Alice se répare de 3 ---" << std::endl;
    alice.beRepaired(3);

    std::cout << "\n--- TEST 4 : Bob utilise toute son énergie ---" << std::endl;
    for (int i = 0; i < 10; ++i)
        bob.attack("Alice"); // Bob a 10 points d’énergie au départ

    std::cout << "\n--- TEST 5 : Bob essaie d'attaquer sans énergie ---" << std::endl;
    bob.attack("Alice");

    std::cout << "\n--- TEST 6 : Alice prend 100 dégâts (meurt) ---" << std::endl;
    alice.takeDamage(100);

    std::cout << "\n--- TEST 7 : Alice tente de se réparer alors qu'elle est morte ---" << std::endl;
    alice.beRepaired(5);

    std::cout << "\n--- TEST 8 : Alice tente de prendre encore des dégâts alors qu'elle est morte ---" << std::endl;
    alice.takeDamage(1);

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