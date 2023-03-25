/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:58:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/25 14:08:22 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat*	Paul = new Bureaucrat( "Paul", 150 );
	Bureaucrat*	Copy = new Bureaucrat( *Paul );
	Bureaucrat*	Default = new Bureaucrat();

	std::cout << *Default;
	std::cout << *Copy;
	std::cout << *Paul;
	Paul->incrementGrade();
	std::cout << *Paul;
	Paul->decrementGrade();
	std::cout << *Paul;

	delete Paul;
	delete Copy;
	delete Default;

	return 0;
}