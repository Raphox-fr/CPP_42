/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaria <rafaria@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:50:36 by rafaria           #+#    #+#             */
/*   Updated: 2025/03/06 16:36:07 by rafaria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


char *StrCapitalize(char *str)
{
    int i;

    i = 0;

    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
		i++;
	}
	return (str);

}


int main(int argc, char **argv)
{
    int i;
	std::string FinalString;
    i = 2;
    if (argc <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
		
        while (i <= argc)
        {
			if (i == 2)
			{
				FinalString = StrCapitalize(argv[i - 1]);
			}
			else 
			{
				FinalString = FinalString + " " + StrCapitalize(argv[i - 1]); 
			}
			i++;
        }
		std::cout << FinalString << std::endl;
        

        return (0);
    }
}