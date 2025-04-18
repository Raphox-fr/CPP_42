/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:50:01 by rafaria           #+#    #+#             */
/*   Updated: 2025/04/18 17:23:36 by rafaria          ###   ########.fr       */
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
        void setName();
        void setLastName();
        void setNickname();
        void setPhoneNumber();
        void setDarkestSecret();

        std::string getName();
        std::string getLastName();
        std::string getNickname();
};  


#endif