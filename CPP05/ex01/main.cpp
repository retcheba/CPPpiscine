/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:58:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/26 13:41:18 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	std::cout << "TEST 1" << std::endl;
	{
		try
		{
			Bureaucrat	Paul( "Paul", 50 );
			Form		Form1( "Form1", 100, 50 );

			std::cout << Paul;
			std::cout << Form1;

			Paul.signForm(Form1);
			std::cout << Form1;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "TEST 2" << std::endl;

	{
		try
		{
			Bureaucrat	Paul( "Paul", 50 );
			Form		Form1( "Form1", 100, 50 );

			std::cout << Paul;
			std::cout << Form1;

			Paul.signForm(Form1);
			std::cout << Form1;
			Paul.signForm(Form1);
			std::cout << Form1;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "TEST 3" << std::endl;

	{
		try
		{
			Bureaucrat	Paul( "Paul", 150 );
			Form		Form1( "Form1", 100, 50 );

			std::cout << Paul;
			std::cout << Form1;

			Paul.signForm(Form1);
			std::cout << Form1;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "TEST 4" << std::endl;

	{
		try
		{
			Form	Form1( "Form1", 0, 50 );

			std::cout << Form1;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "TEST 5" << std::endl;

	{
		try
		{
			Form	Form1( "Form1", 100, 0 );

			std::cout << Form1;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	return 0;
}