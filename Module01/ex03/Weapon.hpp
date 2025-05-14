/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:30:07 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/14 16:34:36 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <stdio.h>


class Weapon {
    public:
    Weapon (std::string gun);
    ~Weapon (void);
    
    std::string&  getType();
    void setType(std::string gun);

    private:
        std::string type;    
};


#endif