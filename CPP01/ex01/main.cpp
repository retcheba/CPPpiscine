/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:19:16 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/27 17:44:11 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	Bob;			// Bob is alive
	Bob.set_name( "Bob" );	// Bob's name is set
	Bob.announce();			// Bob is announced

	Zombie* zombies = zombieHorde( 10, "Jim" );	// A zombie horde named Jim is alive
	for (int i = 0; i < 10; i++)
		zombies[i].announce();					// A zombie horde named Jim is announced
	delete [] zombies;							// A zombie horde named Jim is dead

	return 0;				// Bob is dead
}