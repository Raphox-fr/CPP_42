/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:21:08 by rafaria           #+#    #+#             */
/*   Updated: 2025/05/17 17:48:11 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl captain;
    captain.complain("DEBUG");
    captain.complain("INFO");
    captain.complain("WARNING");
    captain.complain("ERROR");
    return (1);
}