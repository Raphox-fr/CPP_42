/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:50:01 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/05 17:45:37 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <stdio.h>



class Contact
{
    private:
        std::string name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact (void);
        ~Contact (void);
        int setName();
        int setLastName();
        int setNickname();
        int setPhoneNumber();
        int setDarkestSecret();
        

        std::string getName();
        std::string getLastName();
        std::string getNickname();
        std::string getDarkestSecret();
        std::string getPhoneNumber(); 

    };  


#endif