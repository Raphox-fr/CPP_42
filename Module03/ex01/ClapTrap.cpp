/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:10 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/06 11:07:55 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


// hit pts = health bar
// attack = perd 1 point energie

// Après beRepaired(3) :
// _EnergyPts = 9 = il a perdu 1 énergie
// _HitPts = 13 = il a gagné 3 de vie

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
    this->_Name = name;
    this->_HitPts = 100;
    this->_EnergyPts = 50;
    this->_AttackDmg = 20;
}

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->_Name = "NoName";
    this->_HitPts = 100;
    this->_EnergyPts = 50;
    this->_AttackDmg = 20;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& arg) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &arg) {
        this->_Name = arg._Name;
        this->_HitPts = arg._HitPts;
        this->_EnergyPts = arg._EnergyPts;
        this->_AttackDmg = arg._AttackDmg;
    }
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap& arg)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = arg;
}


void ClapTrap::attack(const std::string& target)
{
    if (target.empty())
    {
        std::cout << "Target is empty, please name a target" << std::endl;
        return;
    }
    if (this->_HitPts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->getName()
        << " is dead and cannot attack." << std::endl;
        return;
    }
    if (this->_EnergyPts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->getName()
        << " has no energy left to attack." << std::endl;
        return;
    }
    
    this->_EnergyPts--;
    std::cout << "ClapTrap or ScavTrap " << this->getName()
    << " attacks " << target
    << ", causing " << this->_AttackDmg
    << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HitPts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->getName() << " is already dead and can't take more damage." << std::endl;
        return;
    }
    
    if ((int)amount < 0)
    {
        std::cout << "Unvalid amount (takeDamage)" << std::endl;
        return;
    }
    if ((int)amount >= this->_HitPts)
        this->_HitPts = 0;
    else
        this->_HitPts -= amount;
    
    std::cout << "ClapTrap or ScavTrap " << this->getName()
    << " took " << amount
    << " points of damage. Remaining hit points: "
    << this->_HitPts << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_HitPts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->getName() << " is dead and can't be repaired." << std::endl;
        return;
    }
    
    if (this->_EnergyPts <= 0)
    {
        std::cout << "ClapTrap or ScavTrap " << this->getName() << " has no energy left to repair itself." << std::endl;
        return;
    }

    if ((int)amount < 0)
    {
        std::cout << "Unvalid amount (beRepaired)." << std::endl;
        return;
    }
    
    this->_EnergyPts--;
    this->_HitPts = this->_HitPts + amount;
    
    std::cout << "ClapTrap or ScavTrap " << this->getName()
    << " repairs itself for " << amount
    << " hit points. Current hit points: "
    << this->_HitPts << std::endl;
}


std::string ClapTrap::getName() const
{
    return this->_Name;   
}
int ClapTrap::getHitPts() const
{
    return this->_HitPts;   
}

int ClapTrap::getEnergyPts() const
{
    return this->_EnergyPts;   
}

// ClapTrap::ClapTrap() {
//     std::cout << "Default constructor called" << std::endl;
//     this->_Name = name;
//     this->_HitPts = 10;
//     this->_EnergyPts = 10;
//     this->_AttackDmg = 0;
// }