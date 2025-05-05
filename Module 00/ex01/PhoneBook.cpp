/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:57:28 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/05 15:11:02 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

int PhoneBook::addContact ()
{
	Contact c;
	if (c.setName() == -1)
		return (-1);
	if (c.setLastName() == -1)
		return (-1);
	if (c.setNickname() == -1)
		return (-1);
	if (c.setPhoneNumber() == -1)
		return (-1);
	if (c.setDarkestSecret() == -1)
		return (-1);
	index = totaladded % 8;
	_contact[index] = c;
	totaladded++;
	return (1);
}

std::string	format_contact(std::string str)
{
	if (str.length() > 10)
	{
		return (str.substr(0, 9) + ".");
	}
	return str;
}
void PhoneBook::search ()
{
	int index;
	int i;
	i = 0;

	std::string name;
	std::string lastname;
    std::string nickname;
    std::string number;
    std::string darkestsecret;
	
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (i < 8)
	{
		name =  _contact[i].getName();
		lastname = _contact[i].getLastName();
		nickname =   _contact[i].getNickname();
		if (name.empty() == 1)
			break;
		std::cout << "|" << std::setw(10) << i
		<< "|" << std::setw(10) << format_contact(name)
		<< "|" << std::setw(10) << format_contact(lastname)
		<< "|" << std::setw(10) << format_contact(nickname)
		<< "|" << std::endl;
		i++;
	}
	std::cout << "\nGive me an index : " << std::endl;
	std::getline (std::cin,number);
	std::istringstream iss(number);
	iss >> index;
	if (index < 0 || index >= 8)
	{
        std::cout << "Invalid index." << std::endl;
        return;
	}
	name =  _contact[index].getName();
	lastname = _contact[index].getLastName();
	nickname =   _contact[index].getNickname();
	darkestsecret = _contact[index].getDarkestSecret();
	if (name.empty() == 1)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	std::cout << "Name : "<< name << std::endl;
	std::cout << "Lastname : " << lastname << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Darkest secret : "  << darkestsecret << std::endl;
	return ;
}



PhoneBook::PhoneBook (void)
{
	std::cout << "PhoneBook Constructor called" << std::endl;
}

PhoneBook::~PhoneBook (void)
{
	std::cout << "PhoneBook Destructor called" << std::endl;
}





// std::string name;
// std::cout << "Please, enter your full name: ";
// std::getline (std::cin,name);
// std::cout << "Hello, " << name << "!\n";