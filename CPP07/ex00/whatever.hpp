/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:32:38 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/15 22:01:27 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template< typename T >
void	swap( T & a, T & b )
{
	T	c = a;
	a = b;
	b = c;
	return;
}

template< typename T >
T const &	min( T const & a, T const & b )
{
	if ( a == b )
		return ( b );
	return ( (a < b) ? a : b );
}

template< typename T >
T const &	max( T const & a, T const & b )
{
	if ( a == b )
		return ( b );
	return ( (a > b) ? a : b );
}

#endif