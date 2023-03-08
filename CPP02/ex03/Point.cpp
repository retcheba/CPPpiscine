/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:07:25 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/08 17:11:34 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{
	return;
}

Point::Point( const float a, const float b ) : x(a), y(b)
{
	return;
}

Point::Point( Point const & src )
{
	*this = src;

	return;
}

Point::~Point( void )
{
	return;
}

Point &	Point::operator=( Point const & rhs )
{
	if (this != &rhs)
	{
		this->x = rhs.x;
		this->y = rhs.y;
	}
	return *this;
}

Fixed	Point::getX( void ) const
{
	Fixed	tmp( this->x );
	return (tmp);
}

Fixed	Point::getY( void ) const
{
	Fixed	tmp( this->y );
	return (tmp);
}

void	Point::setXY( const float a, const float b )
{
	this->x = a;
	this->y = b;
	return;
}
