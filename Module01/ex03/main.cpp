/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:00:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/15 12:12:24 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

int main(void)
{
	Weapon club = Weapon("j'ai rien frere");
	HumanA Bob("bob", club);
	Bob.attack();
	
	std::cout << " ---------- JIM ----------" << std::endl;

	Weapon AK47 = Weapon("AK47");
	HumanB jim("Jim");
	jim.attack();
	
	jim.setWeapon(AK47);
	
	jim.attack();
	return (1);
	
}	
