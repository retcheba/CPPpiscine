/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:47:13 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/28 16:05:15 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "Intern constructor called" << std::endl;
	return;
}

Intern::Intern( Intern const & src )
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;

	return;
}

Intern::~Intern( void )
{
	std::cout << "Intern destructor called" << std::endl;
	return;
}

Intern &	Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return (*this);
}

Form*	Intern::makeForm( std::string nameForm, std::string target )
{
	std::string	nameForms[3] = { "ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm" };
	Form*	form = NULL;
	int	n;

	for (n = 0; n < 3; n++)
	{
		if (!nameForms[n].compare(nameForm))
			break;
	}
	
	if (n < 3)
		std::cout << "Intern creates " << nameForm << std::endl;

	switch (n)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Silly intern didn't find the form you requested" << std::endl;
			break;
	}

	return (form);
}
