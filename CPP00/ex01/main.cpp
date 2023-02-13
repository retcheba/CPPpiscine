/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:10:47 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/13 19:16:27 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	PhoneBook	repertory;
	std::string	buff;

	(void)repertory;
	std::cout << "\033[1m*** Welcome in My Awesome PhoneBook ***\033[0m" << std::endl << std::endl;
	while (true)
	{
		std::cout << "What do you want to do?" << std::endl;
		std::cin >> buff;
		if (!std::cin.good())
			break;
		if (buff.compare("EXIT") == 0)
		{
			std::cout << std::endl << "\033[1m***             Goodby!             ***\033[0m" << std::endl;
			break;
		}
		else if (buff.compare("ADD") == 0)
		{}
		else if (buff.compare("SEARCH") == 0)
		{}
		else
			std::cout << "Sorry I don't understand." << std::endl;
		std::cout << std::endl;
	}
	return (0);
}