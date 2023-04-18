/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:17:03 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/18 17:22:01 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <cstdlib>
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

	void			addNumber( int nb );
	void			addManyNumbers( unsigned int range, int nb );
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );
	void			printSpan( void );

private:

	std::vector<int>	_v;

};

#endif