/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:34:36 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/14 12:21:35 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"



HumanA::HumanA (std::string name, Weapon a())
{
	std::cout << "HumainA Constructor called" << std::endl;
    this->name = name;
    this->a = a;
}

HumanA::~HumanA (void)
{
	std::cout << "HumainA Destructor called" << std::endl;
}

void HumanA::attack (void)
{
	std::cout << "HumainA Destructor called" << std::endl;
}

// std::string&