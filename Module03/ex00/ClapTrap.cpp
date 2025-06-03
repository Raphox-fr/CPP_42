/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:10 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/03 15:49:58 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor called" << std::endl;
    this->_hit_pts = 10;
    this->_energy_pts = 10;
    this->_Attack_dmg = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default destructor called" << std::endl;
}


void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap" << this->get_name() << "attacks" << target << "causing" << this->_Attack_dmg << "points of damage!";
    
    
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    
}
void ClapTrap::beRepaired(unsigned int amount)
{
    
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