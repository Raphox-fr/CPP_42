/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:32:47 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/14 16:54:42 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include <iostream>
#include <stdio.h>
#include "Weapon.hpp"

class HumanA {
    public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA (void);

    // Weapon a;
    std::string name;

    void attack(void);
	
    private:
		std::string _name;
		Weapon _gun;
        
};


#endif