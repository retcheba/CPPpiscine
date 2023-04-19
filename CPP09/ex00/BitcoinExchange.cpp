/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:02:23 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/19 20:24:09 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) : _infile(NULL)
{
	return;
}

BitcoinExchange::BitcoinExchange( char *infile ) : _infile(infile)
{
	return;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src )
{
	*this = src;

	return;
}

BitcoinExchange::~BitcoinExchange( void )
{
	return;
}

BitcoinExchange &	BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
	if ( this != &rhs )
	{
		this->_infile = rhs._infile;
	}
	return (*this);
}

void	BitcoinExchange::getInput( void )
{
	std::ifstream	ifs;
	ifs.open( this->_infile );

	if (!ifs.is_open())
	{
		std::cerr << "Error: cannot open the input file" << std::endl;
		throw (std::exception());
	}

	int	i = 0;
	std::string	str;

	while ( getline(ifs, str) )
	{
		this->_input[i] = str;
		i++;
	}

	this->_lenInput = i;

	ifs.close();
	return;
}

void	BitcoinExchange::getData( void )
{
	std::ifstream	ifs;
	ifs.open( "data.csv" );

	if (!ifs.is_open())
	{
		std::cerr << "Error: cannot open the 'data.csv' file" << std::endl;
		throw (std::exception());
	}

	int	i = 0;
	std::string	str;

	while ( getline(ifs, str) )
	{
		this->_data[i] = str;
		i++;
	}

	this->_lenData = i;

	ifs.close();
	return;
}

void	BitcoinExchange::convert( void )
{
//	INPUT.TXT
	getInput();

//	DATA.CSV
	getData();

	if ( this->_input[0].compare("date | value") != 0 )
	{
		std::cerr << "Error: wrong input file header" << std::endl;
		throw (std::exception());
	}

	std::string	str;
	std::string	date;
	std::string	value;
	std::size_t found;

	for ( int i = 1; i < this->_lenInput; i++ )
	{
		str = this->_input[i];
		found = str.find(" | ");

		if ( found != std::string::npos)
		{
			date = str.substr(0, found);
			value = str.substr(found + 3, (str.length() - found - 3));
			std::cout << date << " => " << value << std::endl;
		}
		else
			std::cerr << "Error: bad input => " << str << std::endl;
		
	}

	return;
}