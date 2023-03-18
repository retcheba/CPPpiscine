/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:54:35 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/17 19:36:45 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain default constructor called" << std::endl;
	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = "default_idea";
	return;
}

Brain::Brain( std::string idea )
{
	std::cout << "Brain constructor called" << std::endl;
	for ( int i = 0; i < 100; i++ )
		this->_ideas[i] = idea;
	return;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	
	return;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &	Brain::operator=( Brain const & rhs )
{
	if(this != &rhs)
	{
		for ( int i = 0; i < 100; i++ )
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void	Brain::PrintAllIdeas( void ) const
{
	for ( int i = 0; i < 100; i++ )
		std::cout << this->_ideas[i] << " ";
	std::cout << std::endl;
	return;
}
