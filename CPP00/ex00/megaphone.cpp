/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:49:56 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/13 17:58:27 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{
	std::locale	loc;
	std::string	str;

	if (argc > 1)
	{
		int	j = 0;
		while (argv[++j])
		{
			str = (std::string)argv[j];
			for (std::string::size_type i = 0; i < str.length(); ++i)
    			std::cout << std::toupper(str[i],loc);
		}	
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return (0);
}