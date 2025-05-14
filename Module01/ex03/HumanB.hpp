/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:32:47 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/14 12:13:55 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include <iostream>
#include <stdio.h>


class HumanB {
    public:
    HumanB (void);
    ~HumanB (void);
    void attack(void);
    

    private:
        std::string type;    
};


#endif