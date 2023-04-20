/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:02:11 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/20 20:10:26 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <time.h>
# include <map>
# include <algorithm>
# include <exception>

# define RED "\033[1;91m"
# define YELLOW "\033[1;93m"
# define WHITE "\033[0m"

class BitcoinExchange
{

public:

	BitcoinExchange( void );
	BitcoinExchange( char *infile );
	BitcoinExchange( BitcoinExchange const & src );
	~BitcoinExchange( void );

	BitcoinExchange &	operator=( BitcoinExchange const & rhs );
	void	getInput( void );
	void	getData( void );
	void	getDate( void );
	void	getPrice( void );
	int		getIndex( struct tm date );
	void	convert( void );
	bool	beforeCreationBtc( struct tm date );

private:

	std::map< int, std::string >	_input;
	std::map< int, std::string >	_data;
	std::map< int, struct tm >		_date;
	std::map< int, double >			_price;
	char	*_infile;
	int		_lenInput;
	int		_lenData;
};

#endif