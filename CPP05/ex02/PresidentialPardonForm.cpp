/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:51:41 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/27 17:20:30 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "PresidentialPardonForm", 25, 5 ), _target("default_target")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form( "PresidentialPardonForm", 25, 5 ), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : Form( src )
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;

	return;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void	PresidentialPardonForm::executor( void ) const
{
	std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox" << std::endl;
	return;
}