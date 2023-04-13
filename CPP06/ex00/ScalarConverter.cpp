/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:50:54 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/13 16:22:25 by retcheba         ###   ########.fr       */
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
	if ( isZero(input) )
		return 0;
	if ( isChar(input) )
		return 1;
	if ( isInf(input) )
		return 2;
	if ( isNan(input) )
		return 3;
	if ( isNumeric(input) )
		return 4;
	return -1;
}

bool	ScalarConverter::isZero( std::string input )
{
	int i = 0;
	bool point = 0;

	if ( input[0] == '+' || input[0] == '-' )
		i++;
	while ( input[i] && ( input[i] == '0' || input[i] == '.' ) )
	{
		if ( input[i] == '.' )
		{
			if ( point )
				return false;
			else
				point = 1;
		}
		i++;
	}
	if (input[i] == 'f')
			i++;
	if ( input[i] == 0 )
		return true;
	return false;
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

bool	ScalarConverter::isNumeric( std::string input )
{
	char	*endptr;
	double	d = strtod(input.c_str(), &endptr);
	if ( d != 0.0 )
	{
		if (!(*endptr))
			return true;
		else if (*endptr == 'f')
		{
			endptr++;
			if (!(*endptr))
				return true;
		}
	}
	return false;
}

void	ScalarConverter::convert( std::string input )
{
	int type = 0;
	type = getType( input );
	if (type == 0)
	{
		std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: 0" << std::endl;
		std::cout << "float: 0.0f" << std::endl;
		std::cout << "double: 0.0" << std::endl;
	}
	else if (type == 1)
	{
		std::cout << "char: " << input << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<int>(input[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<int>(input[0]) << ".0" << std::endl;
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
	else if ( type == 4 )
	{
		if ( input[input.length() - 1 ] == 'f' )
			input.erase((input.length() - 1), 1);
		char	**endptr = NULL;
		double	d = strtod(input.c_str(), endptr);
		if ( static_cast<int>(d) >= 32 && static_cast<int>(d) <= 126 )
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if ( d >= -2147483648.0 && d <= 2147483647.0 )
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
		if ( d - (double)static_cast<int>(d) == 0.0 )
			std::cout << "float: " << d <<  ".0f" << std::endl;
		else
			std::cout << "float: " << d <<  "f" << std::endl;
		if ( d - (double)static_cast<int>(d) == 0.0 )
			std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << d << std::endl;
	}
	else
		std::cout << "Error: conversion failed" << std::endl;
	return;
}
