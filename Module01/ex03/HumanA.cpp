/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:34:36 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/19 12:16:24 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA (std::string name, Weapon& weapon) : _name(name), _gun(weapon)
{
	std::cout << "humanA Constructor called" << std::endl;
}

HumanA::~HumanA (void)
{
	std::cout << "humanA Destructor called" << std::endl;
}

void HumanA::attack (void)
{
	std::cout << _name << " attacks with their " << _gun.getType() << std::endl;
}

