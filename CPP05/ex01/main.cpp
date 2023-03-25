/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:58:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/25 17:00:47 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	std::cout << "TEST 1" << std::endl; //OK
	{
		try
		{
			Bureaucrat	Paul( "Paul", 50 );
			Bureaucrat	Copy( Paul );
			Bureaucrat	Default;

			std::cout << Paul;
			std::cout << Copy;
			std::cout << Default;

			Paul.incrementGrade();
			std::cout << Paul;
			Paul.decrementGrade();
			std::cout << Paul;
			Paul.decrementGrade();
			std::cout << Paul;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "TEST 2" << std::endl; //KO

	{
		try
		{
			Bureaucrat	Paul( "Paul", 151 );

			std::cout << Paul;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "TEST 3" << std::endl; //KO

	{
		try
		{
			Bureaucrat	Paul( "Paul", 0 );

			std::cout << Paul;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "TEST 4" << std::endl; //KO

	{
		try
		{
			Bureaucrat	Paul( "Paul", 149 );

			std::cout << Paul;
			Paul.decrementGrade();
			std::cout << Paul;
			Paul.decrementGrade();
			std::cout << Paul;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "TEST 5" << std::endl; //KO

	{
		try
		{
			Bureaucrat	Paul( "Paul", 2 );

			std::cout << Paul;
			Paul.incrementGrade();
			std::cout << Paul;
			Paul.incrementGrade();
			std::cout << Paul;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	return 0;
}