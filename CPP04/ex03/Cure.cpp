/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:32:58 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/21 01:14:04 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
	return;
}

Cure::Cure( Cure const & src ) : AMateria(src)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = src;

	return;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;
	return;
}

Cure &	Cure::operator=( Cure const & rhs )
{
	(void)rhs;
	return (*this);
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	return;
}

AMateria*	Cure::clone( void ) const
{
	return (new Cure());
}

