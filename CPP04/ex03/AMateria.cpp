/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:51:22 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/20 23:34:15 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type( "default_type" )
{
	std::cout << "AMateria default constructor called" << std::endl;
	return;
}

AMateria::AMateria( std::string const & type ) : _type( type )
{
	std::cout << "AMateria constructor called" << std::endl;
	return;
}

AMateria::AMateria( AMateria const & src )
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
	
	return;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria destructor called" << std::endl;
	return;
}

AMateria &	AMateria::operator=( AMateria const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

std::string const &	AMateria::getType( void ) const
{
	return ( this->_type );
}

void	AMateria::use( ICharacter& target )
{
	(void)target;
	return;
}

