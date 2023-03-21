/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:12:51 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/21 01:14:27 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
	return;
}

Ice::Ice( Ice const & src ) : AMateria(src)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
	
	return;
}

Ice::~Ice( void )
{
	std::cout << "Ice destructor called" << std::endl;
	return;
}

Ice &	Ice::operator=( Ice const & rhs )
{
	(void)rhs;
	return (*this);
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return;
}

AMateria*	Ice::clone( void ) const
{
	return (new Ice());
}
