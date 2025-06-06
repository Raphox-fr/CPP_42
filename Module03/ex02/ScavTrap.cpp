/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:03:01 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/06 15:37:42 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
    this->_Name = name;
    this->_HitPts = 100;
    this->_EnergyPts = 50;
    this->_AttackDmg = 20;
}

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_Name = "NoName";
    this->_HitPts = 100;
    this->_EnergyPts = 50;
    this->_AttackDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& arg) : ClapTrap(arg)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = arg;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& arg) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &arg) {
        this->_Name = arg._Name;
        this->_HitPts = arg._HitPts;
        this->_EnergyPts = arg._EnergyPts;
        this->_AttackDmg = arg._AttackDmg;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate() const
{
    std::cout << this->_Name << " is in gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (target.empty())
    {
        std::cout << "Target is empty, please name a target" << std::endl;
        return;
    }
    if (this->_HitPts <= 0)
    {
        std::cout << "ScavTrap " << this->getName()
        << " IS DEAD AND CANNOT ATTACK" << std::endl;
        return;
    }
    if (this->_EnergyPts <= 0)
    {
        std::cout << "ScavTrap " << this->getName()
        << " HAS NO ENERGY LEFT TO ATTACK" << std::endl;
        return;
    }
    
    this->_EnergyPts--;
    std::cout << "ScavTrap " << this->getName()
    << " ATTACKS " << target
    << ", CAUSING " << this->_AttackDmg
    << " POINTS OF DAMAGE !" << std::endl;
}