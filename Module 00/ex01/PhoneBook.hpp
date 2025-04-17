/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:58:53 by rafaria           #+#    #+#             */
/*   Updated: 2025/04/17 19:09:07 by rafaria          ###   ########.fr       */
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
    private:
        Contact contact[8];        
};


#endif