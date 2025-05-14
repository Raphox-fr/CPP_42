/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:34:36 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/14 16:56:00 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"



HumanA::HumanA (std::string name, Weapon& weapon) : _name(name), _gun(weapon)
{
	std::cout << "HumainA Constructor called" << std::endl;
	attack();
}

HumanA::~HumanA (void)
{
	std::cout << "HumainA Destructor called" << std::endl;
}

void HumanA::attack (void)
{
	std::cout << _name << " attacks with their " << _gun.getType() << std::endl;
}

// std::string&