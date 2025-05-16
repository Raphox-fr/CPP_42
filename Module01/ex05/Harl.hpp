/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 16:26:19 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/16 15:23:19 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP


#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain( std::string level );

    private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif