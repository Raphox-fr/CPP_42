/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:00:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/19 16:06:26 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	int N;
	int i;

	N = 8;
	i = 0;

	Zombie *horde;
	horde = zombieHorde(N, "raphael");

	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return 0;
}	
