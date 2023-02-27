/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:20:33 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/27 16:58:33 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name( name )
{
	std::cout << "Zombie " << _name << " is alive !" << std::endl;
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << _name << " is dead !" << std::endl;
	return ;
}

void	Zombie::announce( void ) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}