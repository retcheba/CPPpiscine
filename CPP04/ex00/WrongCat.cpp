/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:45:09 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/15 15:10:30 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor called" << std::endl;
	return;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	
	return;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meeewwwwwww" << std::endl;
	return;
}