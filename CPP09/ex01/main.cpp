/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:54:32 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/21 19:07:35 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr << RED << "Error: wrong number of arguments" << WHITE << std::endl;
		return 1;
	}

	RPN	lol(argv[1]);

	try {
		lol.calculate();
	}
	catch ( std::exception& e ) {}

	return 0;
}