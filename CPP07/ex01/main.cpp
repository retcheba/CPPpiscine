/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:30:11 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/15 22:32:08 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	std::string arr1[3] = { "lol", "mdr", "xd" };
	int			arr2[4] = { 1, 2, 3, 4 };
	float		arr3[2] = { 4.2f, 1.2f };

	std::cout << "First array of string:" << std::endl;
	iter( arr1, 3, print );
	std::cout << "Second array of int:" << std::endl;
	iter( arr2, 4, print );
	std::cout << "Third array of float:" << std::endl;
	iter( arr3, 2, print );
	
	return 0;
}