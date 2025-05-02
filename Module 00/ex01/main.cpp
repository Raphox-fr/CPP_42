/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:00:59 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/02 12:31:37 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>


int main(void)
{
    PhoneBook phonebook;
	phonebook.totaladded = 0;

    std::string input;
    while (42)
    {
		std::getline (std::cin,input);
		if (std::cin.eof())
			return -1;
		if (input == "ADD")
		{
			phonebook.addContact();
		}
		if (input == "SEARCH")
		{
			phonebook.search();
		}
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