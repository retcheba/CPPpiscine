/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:23:34 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/08 19:43:11 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	Fixed a( 10 );
	Fixed b( 2 );
	Fixed c( 0.5f );

	std::cout << "a = " << a << std::endl;
	std::cout << "b = "<< b << std::endl;
	std::cout << "c = "<< c << std::endl << std::endl;

	std::cout << "a + b = "<< a + b << std::endl;
	std::cout << "a - b = "<< a - b << std::endl;
	std::cout << "a * b = "<< a * b << std::endl;
	std::cout << "a / b = "<< a / b << std::endl << std::endl;

	std::cout << "a + c = "<< a + c << std::endl;
	std::cout << "a - c = "<< a - c << std::endl;
	std::cout << "a * c = "<< a * c << std::endl;
	std::cout << "a / c = "<< a / c << std::endl << std::endl;

	std::cout << "a > b = "<< (a > b) << std::endl;
	std::cout << "a < b = "<< (a < b) << std::endl;
	std::cout << "a >= b = "<< (a >= b) << std::endl;
	std::cout << "a <= b = "<< (a <= b) << std::endl;
	std::cout << "a == b = "<< (a == b) << std::endl;
	std::cout << "a != b = "<< (a != b) << std::endl << std::endl;

	a.setRawBits( 0 );
	b = ( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;

	std::cout << "++a = "<< ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl << std::endl;

	std::cout << "--a = "<< --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl << std::endl;

	std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min( a, b ) << std::endl;

	return 0;
}