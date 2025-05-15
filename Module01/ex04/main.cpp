/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:17:04 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/15 15:34:59 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>



int main(int argc, char **argv)
{
	std::ifstream fichier;
	std::string buffer = argv[1];
	std::string new_file = buffer.append(".replace");
	
	
	if (argc != 4)
	{
		std::cout << "Wrong parameters" << std::endl;
		return (-1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	fichier.open(argv[1]);
	if (!fichier.is_open())
	{
		std::cerr << "Erreur d'ouverture" << std::endl;
		return 1;
	}
	std::ofstream  output(new_file);
	if (!output.is_open())
	{
		fichier.close();
		std::cerr << "Erreur d'ouverture output" << std::endl;
		return 1;
	}

	std::string ligne;
	int position= 0;
	
	while (std::getline(fichier, ligne))
	{
		position = 0;
		while (ligne.find(s1, position) != std::string::npos)
		{
			position = ligne.find(s1, position);
			if (position != std::string::npos)
			{
				ligne.erase(position, s1.length());
				ligne.insert(position, s2);
				position = position + s2.length();
			}
		}
		output << ligne << std::endl;
	}
	output.close();
	fichier.close();
	return (1);
}