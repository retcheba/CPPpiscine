/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:22:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/21 18:50:31 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <algorithm>
# include <exception>

# define RED "\033[1;91m"
# define WHITE "\033[0m"

class RPN
{

public:

	RPN( void );
	RPN( std::string str );
	RPN( RPN const & src );
	~RPN( void );

	RPN &	operator=( RPN const & rhs );
	void	calculate( void );
	void	calcule( char c );

private:

	std::stack<int>	_stack;
	std::string		_str;

};

#endif