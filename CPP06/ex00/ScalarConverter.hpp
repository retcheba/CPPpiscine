/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:50:46 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/13 11:19:03 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{

public:

	ScalarConverter( ScalarConverter const & src );
	~ScalarConverter( void );

	ScalarConverter &	operator=( ScalarConverter const & rhs );

	static void		convert( std::string input );

private:

	ScalarConverter( void );
	static int	getType( std::string input );
	static bool	isChar( std::string input );
	static bool	isInf( std::string input );
	static bool	isNan( std::string input );

};

#endif