/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:25:07 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/13 18:59:06 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main( void )
{
	Data	lol;
	lol.data = "caca";
	
	std::cout << "Data: " << Serializer::deserialize(Serializer::serialize(&lol))->data << std::endl;

	return 0;
}