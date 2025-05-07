/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:32:26 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/07 16:31:53 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon (void)
{
	std::cout << "Weapon Constructor called" << std::endl;
}

Weapon::~Weapon (void)
{
	std::cout << "Weapon Destructor called" << std::endl;
}



// void Zombie::setName (std::string name)
// {
// 	this->name = name;
// }

// void Zombie::announce (void)
// {
// 	name = this->name;
// 	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." <<  std::endl;
// }