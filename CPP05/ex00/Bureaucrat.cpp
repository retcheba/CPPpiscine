/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:36:58 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/25 16:20:24 by retcheba         ###   ########.fr       */
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
	if ( this->_grade < 1 )
		throw (Bureaucrat::GradeTooHighException());
	if ( this->_grade > 150 )
		throw (Bureaucrat::GradeTooLowException());
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src._name), _grade(src._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
	if ( this->_grade < 1 )
		throw (Bureaucrat::GradeTooHighException());
	if ( this->_grade > 150 )
		throw (Bureaucrat::GradeTooLowException());
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
	if ( this->_grade < 1 )
		throw (Bureaucrat::GradeTooHighException());
	if ( this->_grade > 150 )
		throw (Bureaucrat::GradeTooLowException());
	return;
}

void	Bureaucrat::decrementGrade( void )
{
	this->_grade += 1;
	if ( this->_grade < 1 )
		throw (Bureaucrat::GradeTooHighException());
	if ( this->_grade > 150 )
		throw (Bureaucrat::GradeTooLowException());
	return;
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;

	return o;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade Too High");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade Too Low");
}
