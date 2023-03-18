/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:16 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/18 19:36:37 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type("Unknown_Animal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
	return;
}

AAnimal::AAnimal( std::string type ) : _type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
	return;
}

AAnimal::AAnimal( AAnimal const & src )
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
	
	return;
}

AAnimal::~AAnimal( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &	AAnimal::operator=( AAnimal const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

std::string	AAnimal::getType( void ) const
{
	return (this->_type);
}
