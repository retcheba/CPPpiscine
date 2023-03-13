/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:30:45 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/13 11:35:25 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "default_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"),FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & src ) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;

	return;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;

	return;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
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

void		DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);

	return;
}

void	DiamondTrap::whoAmI( void )
{
	if (this->_hitPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " has no more life points!" << std::endl;
	else
		std::cout << "My DiamondTrap's name is " << this->_name << " and My ClapTrap's name is " << ClapTrap::_name << std::endl;
	return;
}
