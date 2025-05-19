/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:00:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/19 12:08:25 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string brain;
	brain = "HI THIS IS BRAIN";

	std::string* stringPTR;
	stringPTR = &brain;

	std::string& stringREF = brain;

	std::cout<< "Avant =" << std::endl;
	std::cout<< brain << std::endl;
	std::cout<< stringPTR << std::endl;
	std::cout<< stringREF << std::endl;

	stringREF = "HI THIS IS NOT BRAIN";

	std::cout<< std::endl;
	std::cout<< "Apres =" << std::endl;
	std::cout<< brain << std::endl;
	std::cout<< stringPTR << std::endl;
	std::cout<< stringREF << std::endl;	
	return 0;
}	
