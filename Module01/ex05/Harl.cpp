/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:26:05 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/17 17:26:54 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl()
{
     std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl()
{
     std::cout << "Harl deconstructor called" << std::endl;
}

void Harl::complain(std::string level)
{	
    int i;
	typedef void (Harl::*Tableau)();
	Tableau tab[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    const char *array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (i = 0; i < 4; i++)
    {
        if (level == array[i])
        {
            &tab[i];
            (this->*tab[i])();
        }
    }
}

void Harl::debug(void)
{
    std::cout << "I love eating pizza" << std::endl;
}

void  Harl::info(void)
{
    std::cout << "I love eating pizza, but where is the cheese" << std::endl;
}
void  Harl::warning(void)
{
     std::cout << "I think i deserve cheese, i like my cheese drippy bro" << std::endl;
    
}
void  Harl::error(void)
{
    std::cout << "No cheese on my pizza, its unacceptable damn" << std::endl;   
}