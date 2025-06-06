/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/06 10:48:25 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


#include <iomanip>

void printHeader(const std::string& str)
{
	int size = 50;
	int totalPad = size - str.size();
	(totalPad < 0) ? totalPad = 0 : totalPad;
	int lPad = totalPad / 2;
	int rPad = totalPad - lPad;

	std::cout << std::endl << SMGREEN;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setfill(' ') << std::setw(lPad + str.size()) << str << std::setw(rPad) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << RESET << std::endl;
}

int main(void)
{
    printHeader("Test : ClapTrap and ScavTrap construction");
    ClapTrap clap1("Clap");
    ScavTrap scav1("Scav");

    printHeader("Test : Attacks ans repare");
    clap1.attack("ennemy");
    scav1.attack("other ennemy");
    clap1.beRepaired(5);
    scav1.beRepaired(10);

    printHeader("Test : Damages");
    clap1.takeDamage(3);
    scav1.takeDamage(20);

    printHeader("Test : ScavTrap guard mode activation");
    scav1.guardGate();

    printHeader("Test : Copy and affectation");
    ScavTrap scav2(scav1);
    ScavTrap scav3;
    scav3 = scav1;

    printHeader("Test : No hit points");
    ScavTrap scav4("DeadScav");
    scav4.takeDamage(200);
    scav4.attack("Someone");
    scav4.guardGate();
    scav4.beRepaired(10);
    scav4.guardGate();

    printHeader("Test : No energy points");
    ScavTrap scav5("NoEnergyScav");
    for (int i = 0; i < 51; ++i)
        scav5.attack("Someone");
    scav5.guardGate();

    printHeader("Test : Destructors");
    return 0;
}









// int main()
// {
//     ScavTrap bonjour("BONJOUR");
//     return 0;
// }

// int main()
// {
//     ScavTrap s("Sentinel");

    // std::cout << "\n--- Test 1 : attack() spécifique à ScavTrap ---" << std::endl;
    // s.attack("Intruder");

    // std::cout << "\n--- Test 2 : guardGate() ---" << std::endl;
    // s.guardGate();

    // std::cout << "\n--- Test 3 : boucle d’attaque jusqu’à 0 énergie ---" << std::endl;
    // for (int i = 0; i < 51; ++i)
    //     s.attack("TestBot");

    // std::cout << "\n--- Test 4 : takeDamage() et beRepaired() ---" << std::endl;
    // s.takeDamage(60);
    // s.beRepaired(40);

    // std::cout << "\n--- Test 5 : mourir et tenter de se réparer ---" << std::endl;
    // s.takeDamage(200);
    // s.beRepaired(10);
    // s.guardGate();

//     return 0;
// }