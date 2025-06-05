/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:03:01 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/04 17:54:04 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_name = name;
    this->_hit_pts = 100;
    this->_energy_pts = 50;
    this->_Attack_dmg = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << this->_name << " is in gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hit_pts <= 0)
    {
        std::cout << "ScavTrap " << this->get_name()
        << " is dead and cannot attack." << std::endl;
        return;
    }
    if (this->_energy_pts <= 0)
    {
        std::cout << "ScavTrap " << this->get_name()
        << " has no energy left to attack." << std::endl;
        return;
    }
    
    this->_energy_pts--;
    std::cout << "ScavTrap " << this->get_name()
    << " attacks " << target
    << ", causing " << this->_Attack_dmg
    << " points of damage!" << std::endl;
}