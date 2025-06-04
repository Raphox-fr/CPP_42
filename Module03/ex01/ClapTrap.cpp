/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:10 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/04 12:16:31 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// hit pts = health bar
// attack = perd 1 point energie

// Après beRepaired(3) :
// _energy_pts = 9 = il a perdu 1 énergie
// _hit_pts = 13 = il a gagné 3 de vie



ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap constructor called" << std::endl;
    this->_name = name;
    this->_hit_pts = 10;
    this->_energy_pts = 10;
    this->_Attack_dmg = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
    if (this->_hit_pts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->get_name()
        << " is dead and cannot attack." << std::endl;
        return;
    }
    if (this->_energy_pts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->get_name()
        << " has no energy left to attack." << std::endl;
        return;
    }
    
    this->_energy_pts--;
    std::cout << "ClapTrap or ScavTrap " << this->get_name()
    << " attacks " << target
    << ", causing " << this->_Attack_dmg
    << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_pts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->get_name() << " is already dead and can't take more damage." << std::endl;
        return;
    }

    if ((int)amount >= this->_hit_pts)
    this->_hit_pts = 0;
    else
    this->_hit_pts -= amount;
    
    std::cout << "ClapTrap or ScavTrap " << this->get_name()
    << " took " << amount
    << " points of damage. Remaining hit points: "
    << this->_hit_pts << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_pts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->get_name() << " is dead and can't be repaired." << std::endl;
        return;
    }
    
    if (this->_energy_pts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->get_name() << " has no energy left to repair itself." << std::endl;
        return;
    }
    
    this->_energy_pts--;
    this->_hit_pts = this->_hit_pts + amount;
    
    std::cout << "ClapTrap or ScavTrap " << this->get_name()
    << " repairs itself for " << amount
    << " hit points. Current hit points: "
    << this->_hit_pts << std::endl;
}


std::string ClapTrap::get_name()
{
    return this->_name;   
}
int ClapTrap::get_hit_pts()
{
    return this->_hit_pts;   
}

int ClapTrap::get_energy_pts()
{
    return this->_energy_pts;   
}

// ClapTrap::ClapTrap() {
//     std::cout << "Default constructor called" << std::endl;
//     this->_name = name;
//     this->_hit_pts = 10;
//     this->_energy_pts = 10;
//     this->_Attack_dmg = 0;
// }