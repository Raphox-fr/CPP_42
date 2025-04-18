/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:49:46 by rafaria           #+#    #+#             */
/*   Updated: 2025/04/18 12:52:23 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


void Contact::setName() {
    std::cout << "Your name :" << std::endl;
    std::getline(std::cin, this->name);
}

void Contact::setLastName() {
    std::cout << "Your last name :" << std::endl;
    std::getline(std::cin, this->last_name);
}

void Contact::setNickname() {
    std::cout << "Your nickname :" << std::endl;
    std::getline(std::cin, this->nickname);
}

void Contact::setPhoneNumber() {
    std::cout << "Your phone number :" << std::endl;
    std::getline(std::cin, this->phone_number);
}

void Contact::setDarkestSecret() {
    std::cout << "Your darkest secret :" << std::endl;
    std::getline(std::cin, this->darkest_secret);
}

Contact::Contact (void)
{
    std::cout << "Contact Constructor called" << std::endl;
}

Contact::~Contact (void)
{
    std::cout << "Contact Destructor called" << std::endl;
}