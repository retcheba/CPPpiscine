/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:01:54 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/13 10:17:22 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;

	return;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;

	return;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void		FragTrap::attack( const std::string& target )
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " has no more life points!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " has no more energy points!" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << " , causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}

	return;
}

void	FragTrap::highFivesGuys( void )
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " has no more life points!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " asks: High five!" << std::endl;
	return;
}