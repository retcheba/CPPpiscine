/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:49:45 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/28 14:43:34 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon const & weapon ) : _name(name), _weapon(weapon)
{
	return;
}

HumanA::~HumanA( void )
{
	return;
}

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	return;
}