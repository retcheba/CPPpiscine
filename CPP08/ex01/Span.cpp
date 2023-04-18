/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:17:16 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/18 17:12:45 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
	this->_v.reserve(0);
	return;
}

Span::Span( unsigned int N )
{
	this->_v.reserve(N);
	return;
}

Span::Span( Span const & src )
{
	*this = src;

	return;
}

Span &	Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_v.reserve(rhs._v.capacity());
	}
	return (*this);
}

Span::~Span( void )
{
	return;
}

void	Span::addNumber( int nb )
{
	if ( this->_v.size() >= this->_v.capacity() )
		throw (std::exception());
	else
		this->_v.push_back(nb);
	return;
}

void	Span::addManyNumbers( unsigned int range, int nb )
{
	if ( (this->_v.size() + range) > this->_v.capacity() )
		throw (std::exception());
	else
	{
		for ( unsigned int i = 0; i < range; i++ )
			this->addNumber(nb);
	}
	return;
}

unsigned int	Span::shortestSpan( void )
{
	if ( this->_v.size() <= 1 )
		throw (std::exception());
	
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;
	std::vector<int>::iterator	ite = this->_v.end();
	unsigned int shortSpan = 4294967295;

	for ( it1 = this->_v.begin(); it1 != ite; ++it1 )
	{
		for ( it2 = this->_v.begin(); it2 != ite; ++it2 )
		{
			if ( shortSpan > abs( *it1 - *it2 ) && it1 != it2 )
				shortSpan = abs( *it1 - *it2 );
		}
	}
	
	return (shortSpan);
}

unsigned int	Span::longestSpan( void )
{
	if ( this->_v.capacity() <= 1 )
		throw (std::exception());
	
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;
	std::vector<int>::iterator	ite = this->_v.end();
	unsigned int shortSpan = 0;

	for ( it1 = this->_v.begin(); it1 != ite; ++it1 )
	{
		for ( it2 = this->_v.begin(); it2 != ite; ++it2 )
		{
			if ( shortSpan < abs( *it1 - *it2 ) && it1 != it2 )
				shortSpan = abs( *it1 - *it2 );
		}
	}
	
	return (shortSpan);
}

void	Span::printSpan( void )
{
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = this->_v.end();

	for ( it = this->_v.begin(); it != ite; ++it )
	{
		std::cout << *it << std::endl;
	}

	return;
}