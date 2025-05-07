/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:30:07 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/07 11:30:46 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdio.h>

class Zombie {
    public:
        Zombie (void);
        ~Zombie (void);
        void setName(std::string name);
        void announce( void );
    private:
        std::string name;

};

#endif