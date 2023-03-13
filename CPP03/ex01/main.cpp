/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:59:52 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/13 12:23:19 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	Default;
	ScavTrap	Charlotte("Charlotte");
	ScavTrap	Copy(Charlotte);

	std::cout << std::endl;

	Default.attack( "Lucas" );
	Charlotte.attack( "Gaspard" );
	Copy.attack( "Gaspard" );

	std::cout << std::endl;

	Charlotte.beRepaired(8);
	Default.takeDamage(10);
	Copy.guardGate();

	std::cout << std::endl;

	return 0;
}