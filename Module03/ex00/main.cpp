/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/06 10:46:58 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#include "ClapTrap.hpp"
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
	printHeader("Test : ClapTrap construction");
	ClapTrap clap1("Clap");

	printHeader("Test : Attacks ans repare");
	clap1.attack("ennemy");
	clap1.beRepaired(5);

	printHeader("Test : Damages");
	clap1.takeDamage(3);

	printHeader("Test : Copy and affectation");
	ClapTrap clap2;
	clap2 = clap1;
	ClapTrap clap3(clap2);

	printHeader("Test : No hit points");
	ClapTrap clap4("DeadClap");
	clap4.takeDamage(200);
	clap4.attack("Someone");
	clap4.beRepaired(10);

	printHeader("Test : No energy points");
	ClapTrap clap5("NoEnergyClap");
	for (int i = 0; i < 11; ++i)
		clap5.attack("Someone");
	printHeader("Test : Destructors");
	return 0;
}






















// int main()
// {
//     ClapTrap bob("Bob");

//     ClapTrap alice("Alice");

//     std::cout << "\n--- TEST 1 : Bob attaque Alice ---" << std::endl;
//     bob.attack("Alice");

//     std::cout << "\n--- TEST 2 : Alice prend 4 dégâts ---" << std::endl;
    
//     std::cout << "\n--- TEST 3 : Alice se répare de 3 ---" << std::endl;
    
//     std::cout << "\n--- TEST 4 : Bob utilise toute son énergie ---" << std::endl;
//     for (int i = 0; i < 10; ++i)
//         bob.attack("Alice"); // Bob a 10 points d’énergie au départ
    
//     std::cout << "\n--- TEST 5 : Bob essaie d'attaquer sans énergie ---" << std::endl;
//     bob.attack("Alice");
    
//     std::cout << "\n--- TEST 6 : Alice prend 100 dégâts (meurt) ---" << std::endl;
//     alice.takeDamage(100);
    
//     std::cout << "\n--- TEST 7 : Alice tente de se réparer alors qu'elle est morte ---" << std::endl;
//     alice.beRepaired(5);
    
//     std::cout << "\n--- TEST 8 : Alice tente de prendre encore des dégâts alors qu'elle est morte ---" << std::endl;
//     alice.takeDamage(1);
    
//     return 0;
// }


// ClapTrap bob("Bob");
// ClapTrap bobi("");

// ClapTrap alice("Alice");

// std::cout << "\n--- TEST 1 : Bob attaque Alice ---" << std::endl;
// bob.attack("Alice");

// std::cout << "\n--- TEST 2 : Alice prend 4 dégâts ---" << std::endl;
// alice.takeDamage(6);

// alice.beRepaired(3);

// alice.takeDamage(0);

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