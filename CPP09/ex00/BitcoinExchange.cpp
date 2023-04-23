/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:02:23 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/23 15:59:16 by retcheba         ###   ########.fr       */
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
		std::cerr << RED << "Error: cannot open the input file" << WHITE << std::endl;
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
		std::cerr << RED  << "Error: cannot open the 'data.csv' file" << WHITE << std::endl;
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
	char		*endptr;

	for ( int i = 1; i < this->_lenData; i++ )
	{
		str = this->_data[i];
		found = str.find(",");

		if ( found != std::string::npos )
		{
			date = str.substr(0, found);
			endptr = strptime(date.c_str(), "%Y-%m-%d", &this->_date[i - 1]);

			if ( endptr == NULL )
			{
				std::cerr << RED  << "Error: bad data in the file 'data.csv' on the line => " << WHITE << str << std::endl;
				throw (std::exception());
			}
			if ( *endptr != '\0' )
			{
				std::cerr << RED  << "Error: bad data in the file 'data.csv' on the line => " << WHITE << str << std::endl;
				throw (std::exception());
			}
			if ( beforeCreationBtc(this->_date[i - 1]) )
			{
				std::cerr << RED  << "Error: date before the creation of bitcoin in the file 'data.csv' on the line => " << WHITE << str << std::endl;
				throw (std::exception());
			}
			if ( wrongDate(this->_date[i - 1]) )
			{
				std::cerr << RED  << "Error: invalid date in the file 'data.csv' on the line => " << WHITE << str << std::endl;
				throw (std::exception());
			}
		}
		else
		{
			std::cerr << RED  << "Error: bad data in the file 'data.csv' on the line => " << WHITE << str << std::endl;
			throw (std::exception());
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

			if ( price.empty() )
			{
				std::cerr << RED  << "Error: bad data in the file 'data.csv' on the line => " << WHITE << str << std::endl;
				throw (std::exception());
			}

			d = strtod(price.c_str(), &endptr);

			if (endptr == NULL)
			{
				std::cerr << RED  << "Error: bad data in the file 'data.csv' on the line => " << WHITE << str << std::endl;
				throw (std::exception());
			}
			if ( *endptr != '\0' )
			{
				std::cerr << RED  << "Error: bad data in the file 'data.csv' on the line => " << WHITE << str << std::endl;
				throw (std::exception());
			}

			this->_price[i - 1] = d;
		}
		else
		{
			std::cerr << RED  << "Error: bad data in the file 'data.csv' on the line => " << WHITE << str << std::endl;
			throw (std::exception());
		}
	}
	return;
}

int		BitcoinExchange::getIndex( struct tm date )
{
	int	i = 0;

	while ( this->_date[i].tm_year < date.tm_year && i < (this->_lenData - 2) )
		i++;

	if ( this->_date[i].tm_year == date.tm_year && i < (this->_lenData - 2) )
	{

		while ( this->_date[i].tm_mon < date.tm_mon && this->_date[i].tm_year == date.tm_year && i < (this->_lenData - 2) )
			i++;
		if ( this->_date[i].tm_mon == date.tm_mon && this->_date[i].tm_year == date.tm_year && i < (this->_lenData - 2) )
		{

			while ( (this->_date[i].tm_mon == date.tm_mon) && (this->_date[i].tm_year == date.tm_year) && (this->_date[i].tm_mday < date.tm_mday) && i < (this->_lenData - 2) )
				i++;

		}

        if (this->_date[i].tm_year > date.tm_year)
            i--;
        else if (this->_date[i].tm_year == date.tm_year)
        {
            if (this->_date[i].tm_mon > date.tm_mon)
                i--;
            else if (this->_date[i].tm_mon == date.tm_mon)
            {
                if (this->_date[i].tm_mday > date.tm_mday)
                    i--;
            }
        }

	}

	return (i);
}

bool	BitcoinExchange::beforeCreationBtc( struct tm date )
{
	if ( date.tm_year < 109 )
		return true;
	else if ( date.tm_year == 109 )
	{
		if ( date.tm_mon == 0 && date.tm_mday < 3 )
			return true;
	}
	return false;
}

bool	BitcoinExchange::wrongDate( struct tm date )
{
	if ( date.tm_mon == 3 || date.tm_mon == 5 || date.tm_mon == 8 || date.tm_mon == 10 )
	{
		if ( date.tm_mday == 31 )
			return true;
	}
	if ( date.tm_mon == 1 )
	{
		if ( date.tm_year % 4 == 0 && date.tm_year % 100 != 0 )
		{
			if ( date.tm_mday > 29 )
				return true;
		}
		else
		{
			if ( date.tm_mday > 28 )
				return true;
		}
	}
	return false;
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
		std::cerr << RED  << "Error: wrong input file header" << WHITE << std::endl;
		throw (std::exception());
	}

	if ( this->_data[0].compare("date,exchange_rate") != 0 )
	{
		std::cerr << RED  << "Error: wrong 'data.csv' file header" << WHITE << std::endl;
		throw (std::exception());
	}

	std::string	str;
	std::string	tmp;
	std::string	date;
	std::string	value;
	std::size_t found;
	char		*endptr;
	char		*endptr2;
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

			if ( !date.empty() && !value.empty() )
			{

				d = strtod(value.c_str(), &endptr);

				if (endptr != NULL)
				{

					if ( *endptr == '\0' )
					{

						endptr2 = strptime(date.c_str(), "%Y-%m-%d", &result);

						if (endptr2 != NULL)
						{

							if ( *endptr2 == '\0' )
							{

								if ( !wrongDate(result) )
								{

									if ( beforeCreationBtc(result) )
										std::cerr << RED  << "Error: date before the creation of bitcoin" << WHITE << std::endl;
									else
									{

										if ( d < 0 )
											std::cerr << RED  << "Error: not a positive number" << WHITE << std::endl;
										else if ( d > 1000 )
											std::cerr << RED  << "Error: too large a number" << WHITE << std::endl;
										else
										{

											index = getIndex(result);
											price = d * this->_price[index];

											std::cout << YELLOW << date << " => " << d << " = " << price << WHITE << std::endl;

										}

									}

								}
								else
									std::cerr << RED  << "Error: invalid date => " << WHITE << str << std::endl;

							}
							else
								std::cerr << RED  << "Error: bad input => " << WHITE << str << std::endl;

						}
						else
							std::cerr << RED  << "Error: bad input => " << WHITE << str << std::endl;

					}
					else
						std::cerr << RED  << "Error: bad input => " << WHITE << str << std::endl;

				}
				else
					std::cerr << RED  << "Error: bad input => " << WHITE << str  << std::endl;

			}
			else
				std::cerr << RED  << "Error: bad input => " << WHITE << str << std::endl;

		}
		else
			std::cerr << RED  << "Error: bad input => " << WHITE << str << std::endl;

	}

	return;
}

