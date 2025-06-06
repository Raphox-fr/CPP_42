/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:46:15 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/06 11:03:55 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& arg);
        ScavTrap &operator=(const ScavTrap &arg);
        void attack(const std::string& target);
        void guardGate() const;

    private:
};



