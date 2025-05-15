/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:32:47 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/15 11:56:10 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include <iostream>
#include <stdio.h>
#include "Weapon.hpp"


class HumanB {
    public:
    HumanB (std::string name);
    ~HumanB (void);

    void setWeapon(Weapon& weapon);



    void attack(void);
	
    private:
		std::string _name;
		Weapon *_gun;
        
};

#endif