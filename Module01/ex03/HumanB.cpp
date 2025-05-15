/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:34:55 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/15 12:11:50 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB (std::string name) : _name(name)
{
	std::cout << "HumainB Constructor called" << std::endl;
	_gun = NULL;
}




void HumanB::setWeapon (Weapon& weapon)
{
	_gun = &weapon;
	std::cout << "Weapon Constructor called" << std::endl;
}

HumanB::~HumanB (void)
{
	std::cout << "HumainB Destructor called" << std::endl;
}

void HumanB::attack (void)
{
	if (_gun == NULL)
	{
		std::cout << _name << " has no weapon " << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _gun->getType() << std::endl;
}

