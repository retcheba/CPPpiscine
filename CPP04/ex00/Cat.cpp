/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/15 15:09:25 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	return;
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	
	return;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeewwwwwww" << std::endl;
	return;
}
