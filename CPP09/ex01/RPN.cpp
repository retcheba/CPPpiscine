/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:22:25 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/21 16:39:20 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void )
{
	return;
}

RPN::RPN( RPN const & src )
{
	*this = src;

	return;
}

RPN::~RPN( void )
{
	return;
}

RPN &	RPN::operator=( RPN const & rhs )
{
	if ( this != &rhs )
	{
	}
	return (*this);
}