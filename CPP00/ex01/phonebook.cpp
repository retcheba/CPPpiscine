/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:11:26 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/13 19:07:29 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

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
