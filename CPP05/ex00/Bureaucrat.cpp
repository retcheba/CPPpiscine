/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:36:58 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/25 15:11:26 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name("default_name"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src._name), _grade(src._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;

	return;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs )
{
	(void)rhs;
	return (*this);
}

std::string const	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int		Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade( void )
{
	this->_grade -= 1;
	if ( _grade < 1 )
		throw std::string("Error: Grade Too High");
	if ( _grade > 150 )
		throw std::string("Error: Grade Too Low");
	return;
}

void	Bureaucrat::decrementGrade( void )
{
	this->_grade += 1;
	if ( _grade < 1 )
		throw std::string("Error: Grade Too High");
	if ( _grade > 150 )
		throw std::string("Error: Grade Too Low");
	return;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	if ( rhs.getGrade() < 1 )
		throw std::string("Error: Grade Too High");
	if ( rhs.getGrade() > 150 )
		throw std::string("Error: Grade Too Low");
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;

	return o;
}