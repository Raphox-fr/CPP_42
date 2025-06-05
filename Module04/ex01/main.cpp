/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/04 15:59:34 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


// int main()
// {
//     ScavTrap bonjour("BONJOUR");
//     return 0;
// }

int main()
{
    ScavTrap s("Sentinel");

    std::cout << "\n--- Test 1 : attack() spécifique à ScavTrap ---" << std::endl;
    s.attack("Intruder");

    std::cout << "\n--- Test 2 : guardGate() ---" << std::endl;
    s.guardGate();

    std::cout << "\n--- Test 3 : boucle d’attaque jusqu’à 0 énergie ---" << std::endl;
    for (int i = 0; i < 51; ++i)
        s.attack("TestBot");

    std::cout << "\n--- Test 4 : takeDamage() et beRepaired() ---" << std::endl;
    s.takeDamage(60);
    s.beRepaired(40);

    std::cout << "\n--- Test 5 : mourir et tenter de se réparer ---" << std::endl;
    s.takeDamage(200);
    s.beRepaired(10);
    s.guardGate();

    return 0;
}