/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:02:11 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/19 19:21:01 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <map>
# include <algorithm>
# include <exception>

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
	void	convert( void );

private:

	std::map< int, std::string >	_input;
	std::map< int, std::string >	_data;
	char	*_infile;
	int		_lenInput;
	int		_lenData;
};

#endif