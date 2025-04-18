/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:57:28 by rafaria           #+#    #+#             */
/*   Updated: 2025/04/18 17:37:33 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

void PhoneBook::addContact (Contact c)
{
	index = totaladded % 8;
    _contact[index] = c;
    totaladded++;
}

void PhoneBook::search ()
{
	int index;
	std::string name;
	std::string lastname;
    std::string nickname;	
    std::string number;
	
	std::cout << "Please, may I ask you to give me an index : " << std::endl;
	std::getline (std::cin,number);
	std::istringstream iss(number);
	iss >> index;
	
	if (index < 0 || index >= 8) 
	{
        std::cout << "Invalid index." << std::endl;
        return;
    }

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	name =  _contact[index].getName();
	lastname = _contact[index].getLastName();
	nickname =   _contact[index].getNickname(); 
    std::cout << "|" << std::setw(10) << index
              << "|" << std::setw(10) << name
              << "|" << std::setw(10) << lastname
              << "|" << std::setw(10) << nickname
              << "|" << std::endl;
}

// int	get_contact_info(int index)
// {
	
	
// }


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