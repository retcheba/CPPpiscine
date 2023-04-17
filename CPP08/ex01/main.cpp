/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:55:35 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/17 20:01:06 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main( void )
{
	Span	sp(5);

	try {
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
	}
	catch( std::exception& e ) {
		std::cout << "Span is full" << std::endl;
	}
	
	return 0;
}