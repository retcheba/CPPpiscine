/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:43:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/17 19:38:23 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain("cat_idea");
	return;
}

Cat::Cat( std::string idea ) : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain(idea);
	return;
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	
	return;
}

Cat::~Cat( void )
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &	Cat::operator=( Cat const & rhs )
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeewwwwwww" << std::endl;
	return;
}

void	Cat::getBrain( void ) const
{
	(*this->_brain).PrintAllIdeas();
	return;
}
