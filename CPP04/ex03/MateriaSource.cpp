/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:13:33 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/21 01:24:45 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource constructor called" << std::endl;
	this->_items[0] = NULL;
	this->_items[1] = NULL;
	this->_items[2] = NULL;
	this->_items[3] = NULL;
	return;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
	
	return;
}

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource destructor called" << std::endl;
	int i = 0;
	while ( this->_items[i] != NULL && i < 4 )
	{
		delete this->_items[i];
		i++;
	}
	return;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs )
{
	if (this != &rhs)
	{
		this->_items[0] = rhs._items[0]->clone();
		this->_items[1] = rhs._items[1]->clone();
		this->_items[2] = rhs._items[2]->clone();
		this->_items[3] = rhs._items[3]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while ( this->_items[i] != NULL && i < 4 )
		i++;
	if ( i < 4 )
	{
		std::cout << "MateriaSource learn a Materia" << std::endl;
		this->_items[i] = m;
	}
	else
		std::cout << "MateriaSource is full" << std::endl;
	return;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while ( this->_items[i]->getType() != type && i < 4 )
		i++;
	if ( this->_items[i]->getType() == type )
	{
		std::cout << "MateriaSource create a Materia" << std::endl;
		return (this->_items[i]->clone());
	}
	std::cout << "MateriaSource cannot create a Materia" << std::endl;
	return 0;
}