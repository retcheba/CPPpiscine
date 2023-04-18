/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:55:35 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/18 17:19:39 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void )
{
	std::cout << "TEST 1:" << std::endl;
	{
		Span	sp(10);	
		try {
			sp.addNumber(6);
			sp.addNumber(11);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);

			sp.printSpan();

			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Shortest span: " << sp.longestSpan() << std::endl;
		}
		catch( std::exception& e ) {
			std::cout << "Error: Exception throw" << std::endl;
		}
	}

	std::cout << std::endl << "TEST 2:" << std::endl;
	{
		Span	sp(10000);	
		try {

			sp.addManyNumbers( 10000, 42 );
			
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Shortest span: " << sp.longestSpan() << std::endl;
		}
		catch( std::exception& e ) {
			std::cout << "Error: Exception throw" << std::endl;
		}
	}

	std::cout << std::endl << "TEST 3:" << std::endl;
	{
		Span	sp(0);

		try {
			sp.addNumber(42);
		}
		catch( std::exception& e ) {
			std::cout << "Error: Exception throw" << std::endl;
		}
	
		std::cout << std::endl << "TEST 4:" << std::endl;

		try {
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch( std::exception& e ) {
			std::cout << "Error: Exception throw" << std::endl;
		}

		std::cout << std::endl << "TEST 5:" << std::endl;

		Span	copy(sp);

		try {
			copy.addNumber(42);
		}
		catch( std::exception& e ) {
			std::cout << "Error: Exception throw" << std::endl;
		}
	}
	
	return 0;
}