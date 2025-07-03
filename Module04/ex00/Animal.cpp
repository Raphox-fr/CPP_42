/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:38:10 by rafaria           #+#    #+#             */
/*   Updated: 2025/06/30 15:25:35 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() 
{
    std::cout << "Animal constructor called" << std::endl;
}


Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    return;
}

std::string Animal::getType() const
{
    return this->type;
}







// std::string Animal::get_name()
// {
//     return this->_name;   
// }
// int Animal::get_hit_pts()
// {
//     return this->_hit_pts;   
// }

// int Animal::get_energy_pts()
// {
//     return this->_energy_pts;   
// }