/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:59:52 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/13 12:37:37 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	Default;
	FragTrap	Charlotte("Charlotte");
	FragTrap	Copy(Charlotte);

	std::cout << std::endl;

	Default.attack( "Lucas" );
	Charlotte.attack( "Gaspard" );
	Copy.attack( "Gaspard" );

	std::cout << std::endl;

	Charlotte.beRepaired(8);
	Default.takeDamage(10);
	Copy.highFivesGuys();

	std::cout << std::endl;

	return 0;
}