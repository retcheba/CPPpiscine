/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:12:16 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/24 20:49:31 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed" << std::endl;
	return;
}

void	Contact::set_contact(int nb_contact)
{
	this->index = nb_contact;
	std::cout << std::endl << "New contact: (number " << nb_contact << ")" << std::endl;
	std::cout << "First Name: ";
	std::cin >> this->first_name;
	if (!std::cin.good())
		return;
	std::cout << "Last Name: ";
	std::cin >> this->last_name;
	if (!std::cin.good())
		return;
	std::cout << "Nickname: ";
	std::cin >> this->nickname;
	if (!std::cin.good())
		return;
	std::cout << "Phone Number: ";
	std::cin >> this->phone_number;
	if (!std::cin.good())
		return;
	std::cout << "Darkest Secret: ";
	std::cin >> this->darkest_secret;
	if (!std::cin.good())
		return;
	return;
}

void	Contact::get_contact(void) const
{
	std::cout << "|" << "         " << this->index;
	if (this->first_name.size() > 10)
	{
		std::cout << "|";
		for (std::string::size_type i = 0; i < 9; i++)
			std::cout << this->first_name[i];
		std::cout << ".";
	}
	else
	{
		std::cout << "|";
		for (std::string::size_type i = 0; i < 10 - this->first_name.size(); i++)
			std::cout << " ";
		std::cout << this->first_name;
	}
	if (this->last_name.size() > 10)
	{
		std::cout << "|";
		for (std::string::size_type i = 0; i < 9; i++)
			std::cout << this->last_name[i];
		std::cout << ".";
	}
	else
	{
		std::cout << "|";
		for (std::string::size_type i = 0; i < 10 - this->last_name.size(); i++)
			std::cout << " ";
		std::cout << this->last_name;
	}
	if (this->nickname.size() > 10)
	{
		std::cout << "|";
		for (std::string::size_type i = 0; i < 9; i++)
			std::cout << this->nickname[i];
		std::cout << ".";
	}
	else
	{
		std::cout << "|";
		for (std::string::size_type i = 0; i < 10 - this->nickname.size(); i++)
			std::cout << " ";
		std::cout << this->nickname;
	}
	std::cout << "|" << std::endl;
	return;
}

void	Contact::get_complete_contact(std::string index) const
{
	std::cout << std::endl << "Contact: (number " << index << ")" << std::endl;
	std::cout << "First Name: " << this->first_name << std::endl;
	std::cout << "Last Name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl; 
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
	return;
}