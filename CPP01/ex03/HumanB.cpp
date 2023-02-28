/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:50:18 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/28 15:08:11 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL)
{
	return;
}

HumanB::~HumanB( void )
{
	return;
}

void	HumanB::attack( void )
{
	if (_weapon != NULL)
		std::cout << _name << " attacks with their " << _weapon->getType() << std:: endl;
	else
		std::cout << _name << " attacks with their <no_weapon_set>" << std:: endl;
	return;
}

void	HumanB::setWeapon( Weapon &weapon )
{
	_weapon = &weapon;
	return;
}