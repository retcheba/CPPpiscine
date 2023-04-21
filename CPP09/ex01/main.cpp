/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:54:32 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/21 16:45:12 by retcheba         ###   ########.fr       */
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
	(void)argv;
	return 0;
}