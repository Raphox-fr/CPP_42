/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/06 15:41:23 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
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
    ClapTrap clap1("Clap");
    FragTrap frag1("Frag");
    

    printHeader("Test : Attacks ans repare");
    clap1.attack("ennemy");
    frag1.attack("another ennemy");
    clap1.beRepaired(5);
    frag1.beRepaired(20);

    printHeader("Test : Damages");
    clap1.takeDamage(3);
    frag1.takeDamage(30);

    printHeader("Test : Special functions");
    frag1.highFivesGuys();

    printHeader("Test : Copy and affectation");
    FragTrap frag2(frag1);
    FragTrap frag3;
    frag3 = frag1;

    printHeader("Test : No hit points");
    FragTrap frag4("DeadFrag");
    frag4.takeDamage(200);
    frag4.attack("Someone");
    frag4.highFivesGuys();
    frag4.beRepaired(10);
    frag4.highFivesGuys();

    printHeader("Test : No energy points");
    FragTrap frag5("NoEnergyFrag");
    for (int i = 0; i < 101; ++i)
        frag5.attack("Someone");
    frag5.highFivesGuys();

    printHeader("Test : Destructors");
    return 0;
}


// int main()
// {
//     FragTrap f("Fraggy");

    // std::cout << "\n--- Test 1 : attack() spécifique FragTrap ---" << std::endl;
    // f.attack("Target");

    // std::cout << "\n--- Test 2 : highFivesGuys() ---" << std::endl;
    // f.highFivesGuys();

    // std::cout << "\n--- Test 3 : tester énergie avec attaques ---" << std::endl;
    // for (int i = 0; i < 100; ++i)
    //     f.attack("Dummy");

    // std::cout << "\n--- Test 4 : tester repair() et takeDamage() ---" << std::endl;
    // f.beRepaired(25);
    // f.takeDamage(70);
    // f.beRepaired(20);

    // std::cout << "\n--- Test 5 : mourir et tester high five ---" << std::endl;
    // f.takeDamage(200);
    // f.highFivesGuys();

//     return 0;
// }




// int main()
// {
    // ClapTrap bob("Bob");
    // ClapTrap alice("Alice");
    // FragTrap bonjour("BONJOUR");
    // bonjour.attack("LA TEAM");
    // bonjour.takeDamage(20);
    // bonjour.beRepaired(9);
    
    // bonjour.attack("couou");
    
    // std::cout << "\n--- TEST 1 : Bob attaque Alice ---" << std::endl;
    // bob.attack("Alice");

    // std::cout << "\n--- TEST 2 : Alice prend 4 dégâts ---" << std::endl;
    // alice.takeDamage(4);

    // std::cout << "\n--- TEST 3 : Alice se répare de 3 ---" << std::endl;
    // alice.beRepaired(3);

    // std::cout << "\n--- TEST 4 : Bob utilise toute son énergie ---" << std::endl;
    // for (int i = 0; i < 10; ++i)
    //     bob.attack("Alice"); // Bob a 10 points d’énergie au départ

    // std::cout << "\n--- TEST 5 : Bob essaie d'attaquer sans énergie ---" << std::endl;
    // bob.attack("Alice");

    // std::cout << "\n--- TEST 6 : Alice prend 100 dégâts (meurt) ---" << std::endl;
    // alice.takeDamage(100);

    // std::cout << "\n--- TEST 7 : Alice tente de se réparer alors qu'elle est morte ---" << std::endl;
    // alice.beRepaired(5);

    // std::cout << "\n--- TEST 8 : Alice tente de prendre encore des dégâts alors qu'elle est morte ---" << std::endl;
    // alice.takeDamage(1);

    // return 0;
// }

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