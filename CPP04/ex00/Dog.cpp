/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:58 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/15 15:09:41 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	return;
}

Dog::Dog( Dog const & src ) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	
	return;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "WOOF WOOF !!!" << std::endl;
	return;
}