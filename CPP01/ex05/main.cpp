/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:23:09 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/01 17:23:12 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( void )
{
	Harl	harl;

	std::cout << "Harl complains at the level of DEBUG:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "Harl complains at the level of INFO:" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "Harl complains at the level of WARNING:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "Harl complains at the level of ERROR:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "Harl complains at the level of CRASH:" << std::endl;
	harl.complain("CRASH");

	return 0;
}