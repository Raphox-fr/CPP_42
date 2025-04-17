/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:49:46 by rafaria           #+#    #+#             */
/*   Updated: 2025/04/17 19:25:10 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string setName()
{
	std::string name;

	std::cout << "Your name :" << std::endl;
	std::getline (std::cin,name);
	return name;
	
}
std::string setLastName()
{
	std::string last_name;

	std::cout << "Your last name :" << std::endl;
	std::getline (std::cin,last_name);
	return last_name;
}
std::string setNickname()
{
	std::string nickname;

	std::cout << "Your nickname :" << std::endl;
	std::getline (std::cin,nickname);
	return nickname;
}
std::string setPhoneNumber()
{
	std::string phone_number;

	std::cout << "Your phone number :" << std::endl;
	std::getline (std::cin,phone_number);
	return phone_number;
}

std::string setDarkestSecret()
{
	std::string DarkestSecret;

	std::cout << "Your Darkest Secret :" << std::endl;
	std::getline (std::cin,DarkestSecret);
	return DarkestSecret;
}

Contact::Contact (void)
{
    std::cout << "Contact Constructor called" << std::endl;
}

Contact::~Contact (void)
{
    std::cout << "Contact Destructor called" << std::endl;
}