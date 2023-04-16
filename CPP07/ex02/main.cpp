/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:39:33 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/16 18:51:01 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int	main( void )
{

	{
		Array<int>	a( 10 );
		a.setArr( 42 );
		Array<int>	b( a );
		b.printArr();
	}

		std::cout << std::endl;

	{
		Array<float>	a( 10 );
		a.setArr( 4.2f );
		Array<float>	b( a );
		b.printArr();
	}

		std::cout << std::endl;

	{
		Array<std::string>	a( 10 );
		a.setArr( "lol" );
		Array<std::string>	b( a );
		b.printArr();
	}

		std::cout << std::endl;

	{
		Array<double>	c;
		try {
			std::cout << c[42] << std::endl;
		}
		catch( std::exception& e ) { std::cout << "Error: Exception throw" << std::endl; }
	}

	return 0;
}
