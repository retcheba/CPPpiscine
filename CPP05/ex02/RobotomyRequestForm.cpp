/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:51:15 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/27 18:08:26 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "RobotomyRequestForm", 72, 45 ), _target("default_target")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form( "RobotomyRequestForm", 72, 45 ), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : Form( src )
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;

	return;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void	RobotomyRequestForm::executor( void ) const
{
	std::cout << "Bam! Bam! Bong! Bong! Brrrrrr... " << std::endl;
	
	std::srand((unsigned) std::time(NULL));
	static int random = std::rand() % 100;
	
	if (random % 2 == 1)
		std::cout << this->_target << " has been successfully robotomyzed" << std::endl;
	else
		std::cout << "Sorry, the robotomyzation has failed" << std::endl;
	random++;
	return;
}