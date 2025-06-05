/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:26 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/05 12:23:10 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include "Animal.hpp"


class Animal
{
    public:
        Animal();
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
    protected:
        std::string type;
};

        // Animal(std::string name);
    
    
    // std::string get_name();
    // int get_hit_pts();
    // int get_energy_pts();
    // std::string _name;
    // int _hit_pts;
    // int _energy_pts;
    // int _Attack_dmg;
    
    // void attack(const std::string& target);
    // void takeDamage(unsigned int amount);
    // void beRepaired(unsigned int amount);