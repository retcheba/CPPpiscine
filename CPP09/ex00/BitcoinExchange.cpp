/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:02:23 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/20 00:04:54 by retcheba         ###   ########.fr       */
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

void	BitcoinExchange::getDate( void )
{
	std::size_t found;
	std::string	str;
	std::string	date;

	for ( int i = 1; i < this->_lenData; i++ )
	{
		str = this->_data[i];
		found = str.find(",");

		if ( found != std::string::npos )
		{
			date = str.substr(0, found);
			strptime(date.c_str(), "%Y-%m-%d", &this->_date[i - 1]);
		}
	}
	return;
}

void	BitcoinExchange::getPrice( void )
{
	std::size_t found;
	std::string	str;
	std::string	price;
	char	*endptr;
	double	d;

	for ( int i = 1; i < this->_lenData; i++ )
	{
		str = this->_data[i];
		found = str.find(",");

		if ( found != std::string::npos )
		{
			price = str.substr(found + 1, (str.length() - found - 1));
			d = strtod(price.c_str(), &endptr);
			if (!(*endptr))
				this->_price[i - 1] = d;
		}
	}
	return;
}

int		BitcoinExchange::getIndex( struct tm date )
{
	int	i = 0;

	while ( this->_date[i].tm_year < date.tm_year && i < this->_lenData )
		i++;
	
	while ( this->_date[i].tm_mon < date.tm_mon && i < this->_lenData )
		i++;

	while ( this->_date[i].tm_mday < date.tm_mday && i < this->_lenData )
		i++;
	
	if ( this->_date[i].tm_mday > date.tm_mday )
		i--;

	return (i);
}

void	BitcoinExchange::convert( void )
{
//	INPUT.TXT
	getInput();

//	DATA.CSV
	getData();

//	DATE
	getDate();

//	PRICE
	getPrice();

	if ( this->_input[0].compare("date | value") != 0 )
	{
		std::cerr << "Error: wrong input file header" << std::endl;
		throw (std::exception());
	}

	std::string	str;
	std::string	tmp;
	std::string	date;
	std::string	value;
	std::size_t found;
	char		*endptr;
	double		d;
	struct tm	result;
	double		price;
	int			index;

	for ( int i = 1; i < this->_lenInput; i++ )
	{

		str = this->_input[i];
		found = str.find(" | ");

		if ( found != std::string::npos )
		{

			date = str.substr(0, found);
			value = str.substr(found + 3, (str.length() - found - 3));

			d = strtod(value.c_str(), &endptr);

			if (!(*endptr))
			{

				if (strptime(date.c_str(), "%Y-%m-%d", &result) != NULL)
				{

					if ( d < 0 )
						std::cerr << "Error: not a positive number" << std::endl;
					else if ( d > 1000 )
						std::cerr << "Error: too large a number" << std::endl;
					else
					{
						
						index = getIndex(result);
						price = d * this->_price[index];

						std::cout << date << " => " << d << " = " << price << std::endl;

					}

				}
				else
					std::cerr << "Error: bad input => " << str << std::endl;

			}
			else
				std::cerr << "Error: bad input => " << str  << std::endl;

		}
		else
			std::cerr << "Error: bad input => " << str << std::endl;

	}

	return;
}

