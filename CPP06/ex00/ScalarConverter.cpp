/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:50:54 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/13 11:52:09 by retcheba         ###   ########.fr       */
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

int		ScalarConverter::getType( std::string input )
{
	if ( isChar(input) )
		return 1;
	if ( isInf(input) )
		return 2;
	if ( isNan(input) )
		return 3;
	return 0;
}

bool	ScalarConverter::isChar( std::string input )
{
	if ( input.length() == 1 && !isdigit(input[0]) )
		return true;
	return false;
}

bool	ScalarConverter::isInf( std::string input )
{
	if ( input.compare("inf") == 0 || input.compare("inff") == 0
		 || input.compare("+inf") == 0 || input.compare("-inf") == 0
		 || input.compare("+inff") == 0 || input.compare("-inff") == 0 )
		return true;
	return false;
}

bool	ScalarConverter::isNan( std::string input )
{
	if ( input.compare("nan") == 0 || input.compare("nanf") == 0
		 || input.compare("+nan") == 0 || input.compare("-nan") == 0
		 || input.compare("+nanf") == 0 || input.compare("-nanf") == 0 )
		return true;
	return false;
}

void	ScalarConverter::convert( std::string input )
{
	int type = 0;
	type = getType( input );
	if (type == 1)
	{
		std::cout << "char: " << input << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
	}
	else if ( type == 2 )
	{
		if ( input[input.length() - 1 ] == 'f' && input[input.length() - 2 ] == 'f' )
			input.erase((input.length() - 1), 1);
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
	}
	else if ( type == 3 )
	{
		if ( input[input.length() - 1 ] == 'f' )
			input.erase((input.length() - 1), 1);
		if ( input[0] == '+' || input[0] == '-' )
			input.erase(0, 1);
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
	}
	return;
}
