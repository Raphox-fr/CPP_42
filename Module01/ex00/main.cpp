/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:00:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/07 14:20:33 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	Zombie *a;
	a = newZombie("Raphael");
	randomChump("francs");
	
	a->announce();
	delete a;
	return 0;
}	
