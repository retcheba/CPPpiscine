/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:26:05 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/16 18:49:19 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template< typename T >
Array<T>::Array( void )
{
	std::cout << "Array default constructor called" << std::endl;
	this->_arr = NULL;
	this->_length = 0;
	return;
}

template< typename T >
Array<T>::Array( unsigned int n )
{
	std::cout << "Array constructor called" << std::endl;
	if ( n == 0 )
		this->_arr = NULL;
	else
		this->_arr = new T[n] ();
	this->_length = n;
	return;
}

template< typename T >
Array<T>::Array( Array<T> const & src )
{
	std::cout << "Array copy constructor called" << std::endl;
	*this = src;

	return;
}

template< typename T >
Array<T>::~Array( void )
{
	std::cout << "Array destructor called" << std::endl;
	if ( this->_arr != NULL )
		delete [] this->_arr;
	return;
}

template< typename T >
Array<T> &	Array<T>::operator=( Array<T> const & rhs )
{
	if (this != &rhs)
	{
		this->_length = rhs.size();
		this->_arr = new T[this->_length];
		try {
			for ( size_t i = 0; i < this->_length; i++ )
				this->_arr[i] = rhs._arr[i];
		}
		catch( std::exception& e ) { std::cout << "Error: Exception throw" << std::endl; }
		
	}
	return (*this);
}

template< typename T >
T &	Array<T>::operator[]( unsigned int i )
{
	if ( !this->_arr)
		throw (std::exception());
	if ( !this->_arr[i] )
		throw (std::exception());
	return ( this->_arr[i] );
}

template< typename T >
size_t	Array<T>::size( void ) const
{
	return this->_length;
}

template< typename T >
void	Array<T>::setArr( T const & c )
{
	try {
		for ( size_t i = 0; i < this->_length; i++ )
			this->_arr[i] = c;
	}
	catch( std::exception& e ) { std::cout << "Error: Exception throw" << std::endl; }
	return;
}

template< typename T >
void	Array<T>::printArr( void ) const
{
	try {
		for ( size_t i = 0; i < this->_length; i++ )
			std::cout << this->_arr[i] << std::endl;
	}
	catch( std::exception& e ) { std::cout << "Error: Exception throw" << std::endl; }
	return;
}
