/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 18:06:00 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/26 13:31:10 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _name("default_name"), _signed(0), _gradeToSign(100), _gradeToExecute(50)
{
	std::cout << "Form default constructor called" << std::endl;
	return;
}

Form::Form( std::string name, int gradeToSign, int gradeToExecute ) : _name(name), _signed(0), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form constructor called" << std::endl;
	if ( this->_gradeToSign < 1 )
		throw (Form::GradeTooHighException());
	if ( this->_gradeToSign > 150 )
		throw (Form::GradeTooLowException());
	if ( this->_gradeToExecute < 1 )
		throw (Form::GradeTooHighException());
	if ( this->_gradeToExecute > 150 )
		throw (Form::GradeTooLowException());
	return;
}

Form::Form( Form const & src ) : _name(src._name), _signed(0), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
	if ( this->_gradeToSign < 1 )
		throw (Form::GradeTooHighException());
	if ( this->_gradeToSign > 150 )
		throw (Form::GradeTooLowException());
	if ( this->_gradeToExecute < 1 )
		throw (Form::GradeTooHighException());
	if ( this->_gradeToExecute > 150 )
		throw (Form::GradeTooLowException());
	return;
}

Form::~Form( void )
{
	std::cout << "Form destructor called" << std::endl;
	return;
}

Form &	Form::operator=( Form const & rhs )
{
	(void)rhs;
	return (*this);
}

std::string const	Form::getName( void ) const
{
	return (this->_name);
}

bool	Form::isSigned( void ) const
{
	return (this->_signed);
}

int		Form::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

int		Form::getGradeToExecute( void ) const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned( Bureaucrat const & bureaucrat )
{
	if ( bureaucrat.getGrade() <= this->_gradeToSign )
		this->_signed = 1;
	else
		throw (Form::GradeTooLowException());
	return;
}

std::ostream &	operator<<( std::ostream & o, Form const & rhs )
{
	if (rhs.isSigned())
		o << rhs.getName() << ", signed form, grade to be sign: " << rhs.getGradeToSign() << ", grade to be execute: " << rhs.getGradeToExecute() << std::endl;
	else
		o << rhs.getName() << ", unsigned form, grade to be sign: " << rhs.getGradeToSign() << ", grade to be execute: " << rhs.getGradeToExecute() << std::endl;

	return o;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Error: Grade Too High");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Error: Grade Too Low");
}
