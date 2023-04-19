/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:54:32 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/19 19:28:50 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int argc, char **argv )
{
	if ( argc != 2 )
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}

	BitcoinExchange	lol(argv[1]);

	try {
		lol.convert();
	}
	catch ( std::exception& e ) {}

	return 0;
}