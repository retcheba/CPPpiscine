/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:59:52 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/11 17:25:01 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	Lucas("Lucas");
	ClapTrap	Gaspard("Gaspard");
	ClapTrap	Default;
	ClapTrap	Copy( Lucas );

	std::cout << std::endl;

	Default.attack( "Lucas" );
	Copy.attack( "Gaspard" );

	std::cout << std::endl;

	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );
	Gaspard.attack( "Lucas" );

	std::cout << std::endl;

	Lucas.takeDamage( 5 );
	Lucas.takeDamage( 4 );
	Lucas.beRepaired( 5 );
	Lucas.takeDamage( 5 );
	Lucas.takeDamage( 5 );
	Lucas.beRepaired( 5 );

	std::cout << std::endl;

	return 0;
}