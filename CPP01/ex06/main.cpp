/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:23:09 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/01 17:29:29 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char **argv )
{
	Harl	harl;

	if (argc == 2)
		harl.complain(argv[1]);
	else
		std::cout << "Wrong number of arguments" << std::endl;

	return 0;
}