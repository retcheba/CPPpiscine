/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:59:52 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/11 20:22:10 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap	Charlotte("Charlotte");
	ScavTrap	Default;
	ScavTrap	Copy(Charlotte);

	std::cout << std::endl;

	Charlotte.attack( "Gaspard" );
	Default.attack( "Lucas" );
	Copy.attack( "Gaspard" );

	std::cout << std::endl;

	Charlotte.beRepaired(8);
	Default.takeDamage(10);

	std::cout << std::endl;

	return 0;
}