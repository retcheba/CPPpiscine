/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:58:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/27 18:21:40 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main( void )
{
	std::cout << "TEST 1" << std::endl;
	{
		try
		{
			Bureaucrat	Paul( "Paul", 1 );
			ShrubberyCreationForm	Form1( "MonJardin" );
			RobotomyRequestForm		Form2( "Pierre" );
			PresidentialPardonForm	Form3( "Jacque" );

			std::cout << Paul;
			std::cout << Form1;
			std::cout << Form2;
			std::cout << Form3;

			Paul.signForm(Form1);
			Paul.signForm(Form2);
			Paul.signForm(Form3);

			std::cout << Form1;
			std::cout << Form2;
			std::cout << Form3;

			Paul.executeForm(Form1);
			Paul.executeForm(Form2);
			Paul.executeForm(Form3);
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
			Bureaucrat	Paul( "Paul", 1 );
			PresidentialPardonForm	Form1( "Jacque" );

			std::cout << Paul;
			std::cout << Form1;

			Paul.signForm(Form1);
			std::cout << Form1;
			Paul.signForm(Form1);
			std::cout << Form1;

			Paul.executeForm(Form1);
			Paul.executeForm(Form1);
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
			Bureaucrat	Paul( "Paul", 30 );
			ShrubberyCreationForm	Form1( "MonJardin" );

			std::cout << Paul;
			std::cout << Form1;

			Paul.executeForm(Form1);
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
			Bureaucrat	Paul( "Paul", 50 );
			RobotomyRequestForm	Form1( "Pierre" );

			std::cout << Paul;
			std::cout << Form1;

			Paul.signForm(Form1);
			std::cout << Form1;
			Paul.executeForm(Form1);
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
			Bureaucrat	Paul( "Paul", 100 );
			RobotomyRequestForm	Form1( "Pierre" );

			std::cout << Paul;
			std::cout << Form1;

			Paul.signForm(Form1);
			std::cout << Form1;
			Paul.executeForm(Form1);
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	return 0;
}