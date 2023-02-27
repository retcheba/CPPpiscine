/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:20:33 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/27 17:45:30 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) : _name("default_name")
{
	std::cout << "A zombie is alive !" << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "A zombie is dead !" << std::endl;
	return ;
}

void	Zombie::set_name( std::string name )
{
	_name = name;
	return ;
}

void	Zombie::announce( void ) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}