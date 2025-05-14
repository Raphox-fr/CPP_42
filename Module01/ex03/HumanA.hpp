/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:32:47 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/14 12:15:58 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include <iostream>
#include <stdio.h>
#include "Weapon.hpp"



class HumanA {
    public:
    HumanA (std::string name, Weapon a);
    ~HumanA (void);

    Weapon a;
    std::string name;

    void attack(void);
    

    private:
        std::string type;
        
};


#endif