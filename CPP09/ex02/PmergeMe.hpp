/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:17:28 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/23 00:31:13 by retcheba         ###   ########.fr       */
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

	PmergeMe &			operator=( PmergeMe const & rhs );
	void				sort( void );
	void				printList( void );
	void				printVector( void );
	void				fillContainer( void );
	bool				isZero( std::string str );
	std::list<int>		mergeInsertSortList( std::list<int> list );
	std::vector<int>	mergeInsertSortVector( std::vector<int> vector );
	std::list<int>		insertSortList( std::list<int> list );
	std::vector<int>	insertSortVector( std::vector<int> vector );

private:

	std::list<int>		_list;
	std::vector<int>	_vector;
	char**				_argv;

};

#endif