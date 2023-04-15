/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:32:38 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/15 22:30:14 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template< typename T >
void	iter( T* arr, size_t lenght, void (*f)(T &) )
{
	for ( size_t i = 0; i < lenght; i++ )
		f( arr[i] );
	return;
}

template< typename T >
void	print( T & p )
{
	std::cout << p << std::endl;
	return;
}

#endif