/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:51:12 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/28 14:22:18 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	return;
}

Weapon::~Weapon( void )
{
	return;
}

void	Weapon::setType( std::string const type )
{
	_type = type;
	return;
}

std::string const &	Weapon::getType( void ) const
{
	
	return (_type);
}

