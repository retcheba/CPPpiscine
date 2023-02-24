/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:11:26 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/24 20:45:48 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook created." << std::endl << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << std::endl << "PhoneBook destroyed." << std::endl;
	return;
}

void	PhoneBook::add_contact(void)
{
	this->nb_contact += 1;
	if (this->nb_contact > 8)
		this->nb_contact = 8;
	this->contacts[this->nb_contact - 1].set_contact(this->nb_contact);
	return;
}

void	PhoneBook::search_contact(void)
{
	std::string	buff;
	int	index;

	if (this->nb_contact == 0)
	{
		std::cout << std::endl << "Phonebook is empty" << std::endl;
		return;
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < this->nb_contact; i++)
	{
		this->contacts[i].get_contact();
		std::cout << "---------------------------------------------" << std::endl;
	}
	std::cout << std::endl << "Enter an index: ";
	std::cin >> buff;
	if (!std::cin.good())
		return;
	if (buff.size() != 1)
		std::cout << "Wrong Index" << std::endl;
	if (buff[0] < 48 || buff[0] > 57)
		std::cout << "Wrong Index" << std::endl;
	index = buff[0] - 48;
	if (index >= 1 && index <= this->nb_contact)
		this->contacts[index - 1].get_complete_contact(buff);
	else
		std::cout << "Wrong Index" << std::endl;
	return;
}

int	PhoneBook::nb_contact = 0;