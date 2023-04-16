/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:41:04 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/16 18:04:06 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template< typename T >
class	Array
{

public:

	Array<T>( void );
	Array<T>( unsigned int n );
	Array<T>( Array<T> const & src );
	~Array<T>( void );

	Array<T> &	operator=( Array<T> const & rhs );
	T &			operator[]( unsigned int i );

	size_t	size( void ) const;
	void	setArr( T const & c );
	void	printArr( void ) const;

private:

	T*		_arr;
	size_t	_length;

};

#endif