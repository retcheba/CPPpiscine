/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 18:21:52 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/13 18:45:32 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void )
{
	return;
}

Serializer::Serializer( Serializer const & src )
{
	*this = src;
	return;
}

Serializer &	Serializer::operator=( Serializer const & rhs )
{
	(void)rhs;
	return (*this);
}

Serializer::~Serializer( void )
{
	return;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return ( reinterpret_cast<uintptr_t>(ptr) );
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return ( reinterpret_cast<Data*>(raw) );
}