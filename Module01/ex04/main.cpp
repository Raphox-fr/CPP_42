/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:17:04 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/19 12:41:30 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong parameters" << std::endl;
		return (-1);
	}
	std::ifstream fichier;
	std::string buffer = argv[1];
	std::string new_file = buffer.append(".replace");
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

	std::string line;
	int position= 0;
	
	while (std::getline(fichier, line))
	{
		position = 0;
		while (line.find(s1, position) != std::string::npos)
		{
			position = line.find(s1, position);
			if (position != std::string::npos)
			{
				line.erase(position, s1.length());
				line.insert(position, s2);
				position = position + s2.length();
			}
		}
		output << line;
		if (strchr(line.c_str(), '\n') == 0)
			output << std::endl;
	}
	output.close();
	fichier.close();
	return (1);
}