/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:55:35 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/17 17:38:42 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main( void )
{

	std::cout << "TEST WITH LIST:" << std::endl << std::endl;

	{
		std::list<int>	lst;

		lst.push_back(1);
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(4);
		lst.push_back(5);

		try {
			std::list<int>::iterator	it = easyfind( lst, 1 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( lst, 2 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( lst, 3 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( lst, 4 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( lst, 5 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( lst, 6 );
			std::cout << "Value found: " << *it << std::endl;
		}
		catch( std::exception& e ) {
			std::cout << "Value not found" << std::endl;
		}
	}

	std::cout << std::endl << "TEST WITH VECTOR:" << std::endl << std::endl;

	{
		std::vector<int> v;

	    v.push_back(1);
	    v.push_back(2);
	    v.push_back(3);
	    v.push_back(4);
	    v.push_back(5);

		try {
			std::vector<int>::iterator	it = easyfind( v, 1 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( v, 2 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( v, 3 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( v, 4 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( v, 5 );
			std::cout << "Value found: " << *it << std::endl;
			it = easyfind( v, 6 );
			std::cout << "Value found: " << *it << std::endl;
		}
		catch( std::exception& e ) {
			std::cout << "Value not found" << std::endl;
		}
	}

	return 0;
}