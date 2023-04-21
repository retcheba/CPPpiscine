/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:22:25 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/21 19:13:24 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN( void ) : _str("")
{
	return;
}

RPN::RPN( std::string str ) : _str(str)
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
		this->_str = rhs._str;
	}
	return (*this);
}

void	RPN::calcule( char c )
{
	if ( this->_stack.size() != 2 && this->_stack.size() != 3 )
	{
		std::cerr << RED << "Error: wrong input" << WHITE << std::endl;
		throw (std::exception());
	}

	int b = this->_stack.top();
	this->_stack.pop();
	int a = this->_stack.top();
	this->_stack.pop();

	if ( c == '+' )
		this->_stack.push( a + b );
	else if ( c == '-' )
		this->_stack.push( a - b );
	else if ( c == '*' )
		this->_stack.push( a * b );
	else if ( c == '/' )
	{
		if ( b == 0 )
		{
			std::cerr << RED << "Error: division by zero forbidden" << WHITE << std::endl;
			throw (std::exception());
		}
		this->_stack.push( a / b );
	}

	return;
}

void	RPN::calculate( void )
{
	
	if ( this->_str.empty() )
	{
		std::cerr << RED << "Error: empty string" << WHITE << std::endl;
		throw (std::exception());
	}
	
	int i = 0;

	while ( this->_str[i] )
	{
		if ( this->_str[i] == ' ' )
		{}
		else if ( this->_str[i] == '-' || this->_str[i] == '+' || this->_str[i] == '*' || this->_str[i] == '/' )
			calcule(this->_str[i]);
		else if ( this->_str[i] >= '0' && this->_str[i] <= '9' )
			this->_stack.push(this->_str[i] - 48 );
		else
		{
			std::cerr << RED << "Error: wrong input" << WHITE << std::endl;
			throw (std::exception());
		}
		i++;
	}

	if ( this->_stack.size() != 1 )
	{
		std::cerr << RED << "Error: wrong input" << WHITE << std::endl;
		throw (std::exception());
	}
	else
		std::cout << this->_stack.top() << std::endl;

	return;
}