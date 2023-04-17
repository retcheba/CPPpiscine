/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:56:56 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/17 17:39:20 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <stdexcept>

template< typename T >
typename T::iterator	easyfind( T& container, int value )
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);

    if (it == container.end())
		throw (std::exception());

    return it;
}

#endif