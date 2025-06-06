/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 12:03:01 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/06 15:34:35 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    this->_Name = name;
    this->_HitPts = 100;
    this->_EnergyPts = 100;
    this->_AttackDmg = 30;
}

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_Name = "NoName";
    this->_HitPts = 100;
    this->_EnergyPts = 100;
    this->_AttackDmg = 30;
}

FragTrap::FragTrap(const FragTrap& arg) : ClapTrap(arg)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = arg;
}

FragTrap& FragTrap::operator=(const FragTrap& arg) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &arg) {
        this->_Name = arg._Name;
        this->_HitPts = arg._HitPts;
        this->_EnergyPts = arg._EnergyPts;
        this->_AttackDmg = arg._AttackDmg;
    }
    return *this;
}


FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() const
{
    std::cout << "FragTrap " << this->_Name << " says: High five, bro" << std::endl;
}
