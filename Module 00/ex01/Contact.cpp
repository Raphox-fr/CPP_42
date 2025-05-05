/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:49:46 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/05 18:05:36 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::setName() {
    std::cout << "Your name: ";
    std::getline(std::cin, this->name);
    if (this->name.empty()) 
    {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your name: ";
        std::getline(std::cin, this->name);
    }
    if (this->name.empty()) 
    {
		if (std::cin.eof())
        	return -1;
        std::cout << "You had only one chance, try again completely";
		return (-1);    
    }
	return (1);
}

int Contact::setLastName() {
    std::cout << "Your last name: ";
    std::getline(std::cin, this->last_name);
    if (this->last_name.empty()) {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your last name: ";
        std::getline(std::cin, this->last_name);
    }
    if (this->last_name.empty()) {
        std::cout << "You had only one chance, try again completely" << std::endl;
        return -1;
    }
    return 1;
}

int Contact::setNickname() {
    std::cout << "Your nickname: ";
    std::getline(std::cin, this->nickname);
    if (this->nickname.empty()) {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your nickname: ";
        std::getline(std::cin, this->nickname);
    }
    if (this->nickname.empty()) {
        std::cout << "You had only one chance, try again completely" << std::endl;
        return -1;
    }
    return 1;
}

int stringToIndexContact(std::string str)
{
    if (str.empty())
        return -1;

    int i = 0;
    while (str[i])
    {
        if (!std::isdigit(str[i]))
            return -1;
        i++;
    }

    return 1;
}

int Contact::setPhoneNumber() {
    std::cout << "Your phone number: ";
    std::getline(std::cin, this->phone_number);

    if (this->phone_number.empty() || stringToIndexContact(phone_number) == -1)
    {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your phone number: ";
        std::getline(std::cin, this->phone_number);
    }
    if (this->phone_number.empty() || stringToIndexContact(phone_number) == -1)
    {
        std::cout << "You had only one chance, try again completely" << std::endl;
        return -1;
    }
    return 1;
}

int Contact::setDarkestSecret() {
    std::cout << "Your darkest secret: ";
    std::getline(std::cin, this->darkest_secret);

    if (this->darkest_secret.empty()) {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your darkest secret: ";
        std::getline(std::cin, this->darkest_secret);
    }
    if (this->darkest_secret.empty()) {
        std::cout << "You had only one chance, try again completely" << std::endl;
        return -1;
    }
    return 1;
}

//--------------------------------------------------------
std::string Contact::getName() 
{
    return name;
}

std::string Contact::getLastName() 
{
    return last_name;
}

std::string Contact::getNickname() 
{
    return nickname;
}

std::string Contact::getPhoneNumber() 
{
    return phone_number;
}

std::string Contact::getDarkestSecret() 
{
    return darkest_secret;
}

Contact::Contact (void)
{
    std::cout << "Contact Constructor called" << std::endl;
}

Contact::~Contact (void)
{
    std::cout << "Contact Destructor called" << std::endl;
}