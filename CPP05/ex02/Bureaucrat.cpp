/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:36:58 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/27 17:02:12 by retcheba         ###   ########.fr       */
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

void	Bureaucrat::signForm( Form & form ) const
{
	if ( form.isSigned() )
		std::cout << this->_name << " couldn't sign " << form.getName() << " because it is already signed" << std::endl;
	else
	{
		if ( this->_grade <= form.getGradeToSign() )
		{
			std::cout << this->_name << " signed " << form.getName() << std::endl;
			form.beSigned(*this);
		}
		else
			std::cout << this->_name << " couldn't sign " << form.getName() << " because he doesn't have the required grade" << std::endl;
	}
	return;
}

void	Bureaucrat::executeForm( Form const & form ) const
{
	if ( !form.isSigned() )
		std::cout << this->_name << " couldn't execute " << form.getName() << " because it isn't signed" << std::endl;
	else
	{
		if ( this->_grade <= form.getGradeToExecute() )
		{
			std::cout << this->_name << " executed " << form.getName() << std::endl;
			form.execute(*this);
		}
		else
			std::cout << this->_name << " couldn't execute " << form.getName() << " because he doesn't have the required grade" << std::endl;
	}
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
