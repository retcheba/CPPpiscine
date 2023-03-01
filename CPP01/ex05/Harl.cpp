/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:00:07 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/01 17:19:06 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl( void )
{
	return;
}

Harl::~Harl( void )
{
	return;
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	return;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
	return;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return;
}

void	Harl::complain( std::string level )
{
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void	(Harl::*complainPtr[4])( void ) = { &Harl::debug, &Harl::info,&Harl::warning ,&Harl::error };
	int	match = 0;

	for (int i = 0; i < 4; i++)
	{
		if (!levels[i].compare(level))
		{
			(this->*complainPtr[i])();
			match = 1;
		}
	}

	if (match == 0)
		std::cout << "No matching complaint level." << std::endl;

	return;
}