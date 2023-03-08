/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:26:22 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/08 19:42:05 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const 	Fixed::bits = 8;

Fixed::Fixed( void ) : _nb(0)
{
	return;
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;

	return;
}

Fixed::Fixed( int const i )
{
	this->_nb = i << bits;

	return;
}

Fixed::Fixed( float const f )
{
	this->_nb = roundf(f * ft_pow(2, bits));

	return;
}

Fixed::~Fixed( void )
{
	return;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
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
	return ( this->_nb / (float)ft_pow(2, bits) );
}

int	Fixed::toInt( void ) const
{
	return ( this->_nb >> bits );
}

bool	Fixed::operator>( Fixed const & rhs )
{
	if (this->_nb > rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator<( Fixed const & rhs )
{
	if (this->_nb < rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator>=( Fixed const & rhs )
{
	if (this->_nb >= rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator<=( Fixed const & rhs )
{
	if (this->_nb <= rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator==( Fixed const & rhs )
{
	if (this->_nb == rhs.getRawBits())
		return 1;
	return 0;
}

bool	Fixed::operator!=( Fixed const & rhs )
{
	if (this->_nb != rhs.getRawBits())
		return 1;
	return 0;
}

Fixed	Fixed::operator+( Fixed const & rhs )
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-( Fixed const & rhs )
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*( Fixed const & rhs )
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/( Fixed const & rhs )
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

//	pre-incrementation
Fixed	Fixed::operator++( void )
{
	this->_nb++;
	return (*this);
}

//	post-incrementation
Fixed	Fixed::operator++( int )
{
	Fixed	tmp;

	tmp.setRawBits(this->_nb++);
	return (tmp);
}

//	pre-decrementation
Fixed	Fixed::operator--( void )
{
	this->_nb--;
	return (*this);
}

//	post-decrementation
Fixed	Fixed::operator--( int )
{
	Fixed	tmp;

	tmp.setRawBits(this->_nb--);
	return (tmp);
}

Fixed	Fixed::min( Fixed & first, Fixed & second )
{
	if (first.getRawBits() < second.getRawBits())
		return first;
	return second;
}

Fixed	Fixed::max( Fixed & first, Fixed & second )
{
	if (first.getRawBits() > second.getRawBits())
		return first;
	return second;
}

Fixed	Fixed::min( Fixed const & first, Fixed const & second )
{
	if (first.getRawBits() < second.getRawBits())
		return first;
	return second;
}

Fixed	Fixed::max( Fixed const & first, Fixed const & second )
{
	if (first.getRawBits() > second.getRawBits())
		return first;
	return second;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();

	return o;
}

float	ft_pow( const float base, const float exponent )
{
	float result = base;

	for (int i = 1; i < exponent; i++)
		result *= base;
	return result;
}
