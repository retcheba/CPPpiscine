/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:58 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/18 19:41:23 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : AAnimal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain("dog_idea");
	return;
}

Dog::Dog( std::string idea ) : AAnimal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	this->_brain = new Brain(idea);
	return;
}

Dog::Dog( Dog const & src ) : AAnimal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	
	return;
}

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &	Dog::operator=( Dog const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "WOOF WOOF !!!" << std::endl;
	return;
}

void	Dog::getBrain( void ) const
{
	(*this->_brain).PrintAllIdeas();
	return;
}
