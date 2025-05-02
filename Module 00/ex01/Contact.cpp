/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:49:46 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/02 12:32:06 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


int Contact::setName() {
    std::cout << "Your name: ";
    std::getline(std::cin, this->name);

    if (this->name.empty()) 
    {
		// if (std::cin.eof())
        // 	return -1;
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

int Contact::setPhoneNumber() {
    std::cout << "Your phone number: ";
    std::getline(std::cin, this->phone_number);

    if (this->phone_number.empty()) {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your phone number: ";
        std::getline(std::cin, this->phone_number);
    }
    if (this->phone_number.empty()) {
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

Contact::Contact (void)
{
    std::cout << "Contact Constructor called" << std::endl;
}

Contact::~Contact (void)
{
    std::cout << "Contact Destructor called" << std::endl;
}