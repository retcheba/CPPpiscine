/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 14:59:52 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/13 12:42:40 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void )
{
	DiamondTrap	Default;
	DiamondTrap Toto("Toto");
	DiamondTrap	Copy(Toto);

	std::cout << std::endl;

//	Attack() & Attack damage
	Default.attack("Toto");

	std::cout << std::endl;

//	Hit points
	Toto.takeDamage(20);
	Toto.beRepaired(10);
	Toto.takeDamage(90);
	Toto.beRepaired(20);

	std::cout << std::endl;

//	Energy points
	for (int i = 0; i < 50; i++)
		Default.attack("Tata");

	std::cout << std::endl;

//	Name & ClapTrap's Name
	Copy.whoAmI();

	std::cout << std::endl;

	return 0;
}