/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:29:46 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/18 17:48:40 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template< typename T >
class MutantStack : public std::stack<T>
{

public:

	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack<T>( void ) {};
	MutantStack<T>( MutantStack<T> const & src ) { (void)src; };
	~MutantStack<T>( void ) {};

	MutantStack<T> &	operator=( MutantStack<T> const & rhs ) { (void)rhs; };

	iterator	begin( void ) { return( std::stack<T>::c.begin() ); };
	iterator	end( void ) { return( std::stack<T>::c.end() ); };

private:

};

#endif