/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:58:53 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/02 12:22:44 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <stdio.h>

class PhoneBook {

    public:
        PhoneBook (void);
        ~PhoneBook (void);
        int addContact();
        void search();
        
        void ShowContact(Contact c);
        int totaladded;
        int index;
    private:
        Contact _contact[8];        
};


#endif