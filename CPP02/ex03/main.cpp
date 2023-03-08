/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:23:34 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/08 22:08:28 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void )
{
	Point const	a( 0, 0 );
	Point const	b( 2, 4 );
	Point const	c( 4, 0 );

	Point const	point1( 2, 1 );

	std::cout << "Is the point(2, 1) in the triangle a(0, 0), b(2, 4), c(4, 0) ?" << std::endl;
	if ( bsp( a, b, c, point1 ) )
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	std::cout << std::endl;

	Point const	point2( 4, 0 );

	std::cout << "Is the point(4, 0) in the triangle a(0, 0), b(2, 4), c(4, 0) ?" << std::endl;
	if ( bsp( a, b, c, point2 ) )
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	std::cout << std::endl;

	Point const	point3( 2, 2 );

	std::cout << "Is the point(2, 2) in the triangle a(0, 0), b(2, 4), c(4, 0) ?" << std::endl;
	if ( bsp( a, b, c, point3 ) )
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	std::cout << std::endl;

	Point const	point4( 1, 2 );

	std::cout << "Is the point(1, 2) in the triangle a(0, 0), b(2, 4), c(4, 0) ?" << std::endl;
	if ( bsp( a, b, c, point4 ) )
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	std::cout << std::endl;

	Point const	point5( 4, 1 );

	std::cout << "Is the point(4, 1) in the triangle a(0, 0), b(2, 4), c(4, 0) ?" << std::endl;
	if ( bsp( a, b, c, point5 ) )
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;

	return 0;
}