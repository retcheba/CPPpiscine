/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:58:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/27 20:11:45 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
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
			Intern		SomeRandomIntern;
			Form*		Form1;

			Form1 = SomeRandomIntern.makeForm("ShrubberyCreationForm", "Bender");

			std::cout << Paul;
			std::cout << *Form1;

			Paul.signForm(*Form1);
			std::cout << *Form1;
			Paul.executeForm(*Form1);
			delete Form1;
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
			Intern		SomeRandomIntern;
			Form*		Form1;

			Form1 = SomeRandomIntern.makeForm("RobotomyRequestForm", "Bender");

			std::cout << Paul;
			std::cout << *Form1;

			Paul.signForm(*Form1);
			std::cout << *Form1;
			Paul.executeForm(*Form1);
			delete Form1;
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
			Bureaucrat	Paul( "Paul", 1 );
			Intern		SomeRandomIntern;
			Form*		Form1;

			Form1 = SomeRandomIntern.makeForm("PresidentialPardonForm", "Bender");

			std::cout << Paul;
			std::cout << *Form1;

			Paul.signForm(*Form1);
			std::cout << *Form1;
			Paul.executeForm(*Form1);
			delete Form1;
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
			Bureaucrat	Paul( "Paul", 1 );
			Intern		SomeRandomIntern;
			Form*		Form1;

			Form1 = SomeRandomIntern.makeForm("UnknowForm", "Bender");
			(void)Form1;
		}
		catch (std::exception& error)
		{
			std::cout << error.what() << std::endl;
		}
	}

	return 0;
}