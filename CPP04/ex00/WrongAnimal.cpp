/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:44:30 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/15 15:10:08 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("Unknown_WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	
	return;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Makes an unknown animal sound" << std::endl;
	return;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}
