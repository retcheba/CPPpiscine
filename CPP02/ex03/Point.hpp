/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:07:55 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/08 21:53:46 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <math.h>
# include "Fixed.hpp"

class Point
{

public:

	Point( void );
	Point( const float a, const float b );
	Point( Point const & src );
	~Point( void );

	Point &	operator=( Point const & rhs );

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;

private:

	Fixed const	x;
	Fixed const	y;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
