/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:00:14 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/11 17:27:23 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("default_name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	
	return;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	
	return;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;

	return;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;

	return;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs )
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

void		ClapTrap::attack( const std::string& target )
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no more life points!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no more energy points!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " , causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}

	return;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no more life points!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}

	return;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no more life points!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " has no more energy points!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}

	return;
}
