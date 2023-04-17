/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:17:03 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/17 19:48:22 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <exception>

class	Span
{

public:

	Span( void );
	Span( unsigned int N );
	Span( Span const & src );
	~Span( void );

	Span &	operator=( Span const & rhs );

	void	addNumber( int nb );

private:

	std::vector<int>	_v;

};

#endif