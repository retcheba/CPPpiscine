/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:22:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/21 16:44:57 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <algorithm>

# define RED "\033[1;91m"
# define WHITE "\033[0m"

class RPN
{

public:

	RPN( void );
	RPN( RPN const & src );
	~RPN( void );

	RPN &	operator=( RPN const & rhs );

private:

};

#endif