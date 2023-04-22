/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:17:28 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/22 16:49:48 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cerrno>
# include <sys/time.h>
# include <list>
# include <vector>
# include <algorithm>
# include <exception>

# define RED "\033[1;91m"
# define WHITE "\033[0m"

class PmergeMe
{

public:

	PmergeMe( void );
	PmergeMe( char **argv );
	PmergeMe( PmergeMe const & src );
	~PmergeMe( void );

	PmergeMe &	operator=( PmergeMe const & rhs );
	void		sort( void );
	void		fillContainer( void );
	bool		isZero( std::string str );
	void		mergeSortList( void );
	void		mergeSortVector( void );

private:

	std::list<int>		_l;
	std::vector<int>	_v;
	char**				_argv;

};

#endif