/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:00:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/07 11:49:09 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"
void randomChump( std::string name )
{
	Zombie zombie;
	zombie.setName(name);
	zombie.announce();
}

Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie();
	zombie->setName(name);
	return zombie;
}

int main(void)
{
	Zombie *a;
	a = newZombie("Raphael");
	randomChump("LA VIE");
	delete a;
	return 0;
}	
