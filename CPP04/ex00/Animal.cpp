/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:16 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/15 15:09:06 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Unknown_Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
	return;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	
	return;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &	Animal::operator=( Animal const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Makes an unknown animal sound" << std::endl;
	return;
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}
