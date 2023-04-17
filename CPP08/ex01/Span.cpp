/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:17:16 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/17 19:56:54 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void )
{
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

	}
	return (*this);
}

Span::~Span( void )
{
	return;
}

void	Span::addNumber( int nb )
{
	this->_v.push_back(nb);
	return;
}
