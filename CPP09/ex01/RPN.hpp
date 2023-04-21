/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:22:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/21 16:36:38 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN
# define RPN

# include <iostream>
# include <stack>
# include <algorithm>

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