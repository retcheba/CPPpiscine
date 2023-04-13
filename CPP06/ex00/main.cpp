/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:25:07 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/13 16:23:37 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScalarConverter.hpp"

int	main( int argc, char **argv )
{
	if ( argc != 2 )
		std::cout << "Error: Wrong number of arguments" << std::endl;
	else
		ScalarConverter::convert((std::string)argv[1]);
	return 0;
}