/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:54:32 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/22 15:30:25 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int argc, char **argv )
{
	if ( argc < 2 )
	{
		std::cout << RED << "Error: wrong number of arguments" << WHITE << std::endl;
		return 1;
	}
	
	PmergeMe	lol(argv);

	try {
		lol.sort();
	}
	catch ( std::exception& e ) {}

	return 0;
}