/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:26:22 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/07 17:01:35 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const 	Fixed::bits = 8;

Fixed::Fixed( void ) : _nb(0)
{
	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::Fixed( int const i )
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = i << bits;

	return;
}

Fixed::Fixed( float const f )
{
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(f * pow(2, bits));

	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;

	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_nb = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	return (this->_nb);
}

void	Fixed::setRawBits( int const raw )
{
	this->_nb = raw;
	return;
}

float	Fixed::toFloat( void ) const
{
	return ( this->_nb / (float)pow(2, bits) );
}

int	Fixed::toInt( void ) const
{
	return ( this->_nb >> bits );
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();

	return o;
}
