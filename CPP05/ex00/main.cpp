/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:58:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/25 15:16:17 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat*	Paul = new Bureaucrat( "Paul", 149 );
	Bureaucrat*	Copy = new Bureaucrat( *Paul );
	Bureaucrat*	Default = new Bureaucrat();
	std::cout << std::endl;
	
	try
	{
		std::cout << *Paul;
		std::cout << *Copy;
		std::cout << *Default;
		std::cout << std::endl;
		
		Paul->incrementGrade();
		std::cout << *Paul;
		Paul->decrementGrade();
		std::cout << *Paul;
		Paul->decrementGrade();
		std::cout << *Paul;
		std::cout << std::endl;
	}
	catch (std::string const & error)
	{
		std::cout << error << std::endl;
		std::cout << std::endl;
	}

	delete Paul;
	delete Copy;
	delete Default;

	return 0;
}