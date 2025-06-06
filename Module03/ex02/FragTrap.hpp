/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:46:15 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/06 15:38:46 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        ~FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& arg);
        FragTrap &operator=(const FragTrap &arg);
        void highFivesGuys() const;
    private:
};


