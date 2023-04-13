/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:50:54 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/13 10:15:15 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	return;
}

ScalarConverter::ScalarConverter( ScalarConverter const & src )
{
	*this = src;
	return;
}

ScalarConverter &	ScalarConverter::operator=( ScalarConverter const & rhs )
{
	(void)rhs;
	return (*this);
}

ScalarConverter::~ScalarConverter( void )
{
	return;
}

void	ScalarConverter::convert( const std::string input )
{
	std::cout << "input: " << input << std::endl;
	return;
}
