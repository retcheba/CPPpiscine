/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:17:28 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/22 18:27:18 by retcheba         ###   ########.fr       */
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
	void		algo1( void );
	void		algo2( void );
	void		algo3( void );
	void		algo4( void );

private:

	std::list<int>		_unsortL;
	std::list<int>		_sortL;
	std::vector<int>	_unsortV;
	std::vector<int>	_sortV;
	char**				_argv;

};

bool	mycomparison( int first, int second );

#endif