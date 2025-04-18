/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:49:46 by rafaria           #+#    #+#             */
/*   Updated: 2025/04/18 17:47:35 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::setName() {
    std::cout << "Your name: ";
    std::getline(std::cin, this->name);

    while (this->name.empty()) {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your name: ";
        std::getline(std::cin, this->name);
    }
}

void Contact::setLastName() {
    std::cout << "Your last name: ";
    std::getline(std::cin, this->last_name);

    while (this->last_name.empty()) {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your last name: ";
        std::getline(std::cin, this->last_name);
    }
}

void Contact::setNickname() {
    std::cout << "Your nickname: ";
    std::getline(std::cin, this->nickname);

    while (this->nickname.empty()) {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your nickname: ";
        std::getline(std::cin, this->nickname);
    }
}

void Contact::setPhoneNumber() {
    std::cout << "Your phone number: ";
    std::getline(std::cin, this->phone_number);

    while (this->phone_number.empty()) {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your phone number: ";
        std::getline(std::cin, this->phone_number);
    }
}

void Contact::setDarkestSecret() {
    std::cout << "Your darkest secret: ";
    std::getline(std::cin, this->darkest_secret);

    while (this->darkest_secret.empty()) {
        std::cout << "This field cannot be empty. Please try again." << std::endl;
        std::cout << "Your darkest secret: ";
        std::getline(std::cin, this->darkest_secret);
    }
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