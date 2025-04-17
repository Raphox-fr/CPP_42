/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:00:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/04/17 19:31:55 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>


void add_contact()
{
	Contact contact;

	contact.setName();
	contact.setLastName();
	contact.setNickname();
	contact.setPhoneNumber();
	contact.setDarkestSecret();

	std::cout << "Contact added!" << std::endl;
}

int main(void)
{
    PhoneBook phonebook;

    std::string input;

    while (42)
    {
		std::getline (std::cin,input);
		if (input == "ADD")
			add_contact();
		if (input == "SEARCH")	
			std::cout << "SEARCH" << std::endl;
		if (input == "EXIT")	
			return 0;        
    }		
    return 0;
}	


// Contact (void);
// ~Contact (void);
// void setName(std::string name);
// void setLastName(std::string last_name);
// void setNickname(std::string nickname);
// void setPhoneNumber(std::string phone_number);
// void setDarkestSecret(std::string darkest_secret);