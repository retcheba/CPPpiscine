/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 21:44:26 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/21 01:09:22 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character( void ) : _name( "default_name" )
{
	std::cout << "Character default constructor called" << std::endl;
	this->_items[0] = NULL;
	this->_items[1] = NULL;
	this->_items[2] = NULL;
	this->_items[3] = NULL;
	for ( int i = 0; i < 42; i++)
		this->_trash[i] = NULL;
	return;
}

Character::Character( std::string const & name ) : _name( name )
{
	std::cout << "Character constructor called" << std::endl;
	this->_items[0] = NULL;
	this->_items[1] = NULL;
	this->_items[2] = NULL;
	this->_items[3] = NULL;
	for ( int i = 0; i < 42; i++)
		this->_trash[i] = NULL;
	return;
}

Character::Character( Character const & src )
{
	std::cout << "Character copy constructor called" << std::endl;
	this->_items[0] = NULL;
	this->_items[1] = NULL;
	this->_items[2] = NULL;
	this->_items[3] = NULL;
	for ( int i = 0; i < 42; i++)
		this->_trash[i] = NULL;
	*this = src;
	
	return;
}

Character::~Character( void )
{
	std::cout << "Character destructor called" << std::endl;
	int	i = 0;
	while (this->_items[i] != NULL && i < 4)
	{
		delete this->_items[i];
		i++;
	}
	i = 0;
	while (this->_trash[i] != NULL && i < 42)
	{
		delete this->_trash[i];
		i++;
	}
	return;
}

Character &		Character::operator=( Character const & rhs )
{
	std::cout << "Character assignment operator called" << std::endl;
	if(this != &rhs)
	{
		this->_name = rhs._name;
		int	i = 0;
		while (i < 4)
		{
			if ( this->_items[i] != NULL )
			{
				delete this->_items[i];
				this->_items[i] = NULL;
			}
			if ( rhs._items[i] != NULL )
				this->_items[i] = rhs._items[i]->clone();
			i++;
		}
	}
	return (*this);
}

std::string const &		Character::getName() const
{
	return (this->_name);
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 )
	{
		if (this->_items[idx] != NULL)
			this->_items[idx]->use(target);
		else
			std::cout << "There are no items in this area of the inventory" << std::endl;
	}
	else
		std::cout << "There are no items in this area of the inventory" << std::endl;
	return;
}

void	Character::equip(AMateria* m)
{
	int	i = 0;
	while (this->_items[i] != NULL && i < 4)
		i++;
	if (i < 4)
	{
		std::cout << "A character has equipped an item" << std::endl;
		this->_items[i] = m;
	}
	else
	{
		std::cout << "Character Inventory is full" << std::endl;
		if (m != NULL)
			delete m;
	}
	return;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		int	i = 0;
		while ( this->_trash[i] != NULL && i < 42 )
			i++;
		if ( i < 42 )
		{
			std::cout << "A character has unequipped an item" << std::endl;
			this->_trash[i] = this->_items[idx];
			this->_items[idx] = NULL;
		}
	}
	return;
}
