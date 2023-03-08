/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:07:25 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/08 22:16:11 by retcheba         ###   ########.fr       */
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

Point::Point( Point const & src ) : x(src.getX()), y(src.getY())
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
		(Fixed)this->x = rhs.getX();
		(Fixed)this->y = rhs.getY();
	}
	return *this;
}

Fixed	Point::getX( void ) const
{
	return (this->x);
}

Fixed	Point::getY( void ) const
{
	return (this->y);
}
