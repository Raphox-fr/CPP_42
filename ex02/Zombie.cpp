/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:32:26 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/07 11:50:33 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName (std::string name)
{
	this->name = name;
}

void Zombie::announce (void)
{
	name = this->name;
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." <<  std::endl;
}

Zombie::Zombie (void)
{
	this->name;
	std::cout << "Zombie Constructor called" << std::endl;
}

Zombie::~Zombie (void)
{
	std::cout<< this->name << ": Zombie Destructor called" << std::endl;
}