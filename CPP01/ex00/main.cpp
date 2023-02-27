/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:19:16 by retcheba          #+#    #+#             */
/*   Updated: 2023/02/27 16:58:52 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	Bob( "Bob" );	// Bob is alive
	Bob.announce();			// Bob is announced

	Zombie* Jim = newZombie( "Jimmy" );	// Jimmy is alive
	( *Jim ).announce();					// Jimmy is announced
	delete Jim;							// Jimmy is dead

	randomChump( "Lola" );	// Lola is alive, announced and dead

	return 0;				// Bob is dead
}