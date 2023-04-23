/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:17:12 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/23 19:48:04 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) : _argv(NULL)
{
	return;
}

PmergeMe::PmergeMe( char **argv ) : _argv(argv)
{
	return;
}

PmergeMe::PmergeMe( PmergeMe const & src )
{
	*this = src;

	return;
}

PmergeMe::~PmergeMe( void )
{
	return;
}

PmergeMe &	PmergeMe::operator=( PmergeMe const & rhs )
{
	if ( this != &rhs )
	{
		this->_argv = rhs._argv;
	}
	return (*this);
}

bool	PmergeMe::isZero( std::string str )
{
	int i = 0;

	if ( str[0] == 0 )
		return false;

	while ( str[i] && str[i] == ' ' )
		i++;

	if ( str[i] && (str[i] == '+' || str[i] == '-') )
		i++;

	while ( str[i] && str[i] == '0' )
		i++;
	
	if ( str[i] == 0 )
		return true;
	return false;
}

void	PmergeMe::fillContainer( void )
{
	int			i = 1;
	long int	a;
	char		*endptr;

	while ( this->_argv[i] )
	{
		if ( isZero( this->_argv[i] ) )
			a = 0;
		else
		{

			a = strtol( this->_argv[i], &endptr, 10 );
			if ( errno == ERANGE )
			{
				std::cout << RED << "Error: wrong input" << WHITE << std::endl;
				throw (std::exception());
			}
			if ( *endptr != 0 )
			{
				std::cout << RED << "Error: wrong input" << WHITE << std::endl;
				throw (std::exception());
			}
			if ( a == 0L )
			{
				std::cout << RED << "Error: wrong input" << WHITE << std::endl;
				throw (std::exception());
			}
			if ( a < 0 || a > 2147483647 )
			{
				std::cout << RED << "Error: wrong input" << WHITE << std::endl;
				throw (std::exception());
			}

		}

		this->_list.push_back(a);
		this->_vector.push_back(a);
		i++;
	}
	return;
}

std::list<int>	PmergeMe::insertSortList( std::list<int> list )
{
	std::list<int>::iterator it1 = list.begin();
	std::list<int>::iterator it2 =  list.begin();
	std::list<int>::iterator it3;
	int	a;
	int	b;

	it2++;

	while ( it2 != list.end() )
	{
		a = *it1;
		b = *it2;
		if ( a > b )
		{
			list.erase(it2);
			it3 = it1;
			while ( it3 != list.begin() )
			{
				if ( b > *it3 )
					break;
				it3--;
			}
			if ( b > *it3 )
				it3++;
			list.insert(it3, b);
			it1 = it3;
			it2 = it3;
			it1--;
		}
		it1++;
		it2++;
	}

	return (list);
}

std::vector<int>	PmergeMe::insertSortVector( std::vector<int> vector )
{
	std::vector<int>::iterator it1 = vector.begin();
	std::vector<int>::iterator it2 =  vector.begin();
	std::vector<int>::iterator it3;
	int	a;
	int	b;

	it2++;

	while ( it2 != vector.end() )
	{
		a = *it1;
		b = *it2;
		if ( a > b )
		{
			vector.erase(it2);
			it3 = it1;
			while ( it3 != vector.begin() )
			{
				if ( b > *it3 )
					break;
				it3--;
			}
			if ( b > *it3 )
				it3++;
			vector.insert(it3, b);
			it1 = it3;
			it2 = it3;
			it1--;
		}
		it1++;
		it2++;
	}

	return (vector);
}

std::list<int>	PmergeMe::mergeInsertSortList( std::list<int> list )
{
	std::list<int> first, second;

	if ( list.size() > 50 )
	{
		size_t	i = 0;

		for ( std::list<int>::iterator it = list.begin(); it != list.end(); it++ )
		{
			if ( i < (list.size() / 2) )
				first.push_back(*it);
			else
				second.push_back(*it);
			i++;
		}

		first = mergeInsertSortList(first);
		second = mergeInsertSortList(second);

		first.merge( second );

		return ( first );
	}
	return ( insertSortList(list) );
}

std::vector<int>	PmergeMe::mergeInsertSortVector( std::vector<int> vector )
{
	std::vector<int> first, second, result(vector.size());
	
	if ( vector.size() > 40 )
	{
		size_t	i = 0;

		for ( std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++ )
		{
			if ( i < (vector.size() / 2) )
				first.push_back(*it);
			else
				second.push_back(*it);
			i++;
		}

		first = mergeInsertSortVector(first);
		second = mergeInsertSortVector(second);

		std::merge( first.begin(), first.end(), second.begin(), second.end(), result.begin() );

		return ( result );
	}
	return ( insertSortVector(vector) );
}

void	PmergeMe::printList( void )
{
	if ( this->_list.size() > 10 )
	{
		std::list<int>::iterator it = this->_list.begin();
		for ( int i = 0; i < 10; i++ )
		{
			std::cout << " " << *it;
			it++;
		}
		std::cout << " [...]";
	}
	else
	{
		for ( std::list<int>::iterator it = this->_list.begin(); it != this->_list.end(); ++it )
			std::cout << " " << *it;
	}
	std::cout << std::endl;
}

void	PmergeMe::printVector( void )
{
	if ( this->_vector.size() > 10 )
	{
		std::vector<int>::iterator it = this->_vector.begin();
		for ( int i = 0; i < 10; i++ )
		{
			std::cout << " " << *it;
			it++;
		}
		std::cout << " [...]";
	}
	else
	{
		for ( std::vector<int>::iterator it = this->_vector.begin(); it != this->_vector.end(); ++it )
			std::cout << " " << *it;
	}
	std::cout << std::endl;
}

void	PmergeMe::sort( void )
{
	if ( this->_argv == NULL )
	{
		std::cout << RED << "Error: argv is empty" << WHITE << std::endl;
		throw (std::exception());
	}

	struct timeval	start0;
	struct timeval	end0;
	double	chrono0;
	struct timeval	start1;
	struct timeval	end1;
	double	chrono1;
	struct timeval	start2;
	struct timeval	end2;
	double	chrono2;

	gettimeofday(&start0, NULL);
	fillContainer();
	gettimeofday(&end0, NULL);

	std::cout << "List Before:";
	printList();

	std::cout << "Vector Before:";
	printVector();

	gettimeofday(&start1, NULL);
	this->_list = mergeInsertSortList(this->_list);
	gettimeofday(&end1, NULL);

	gettimeofday(&start2, NULL);
	this->_vector = mergeInsertSortVector(this->_vector);
	gettimeofday(&end2, NULL);

	std::cout << "List After:";
	printList();

	std::cout << "Vector After:";
	printVector();

	chrono0 = static_cast<double>(end0.tv_sec - start0.tv_sec) * 1000000 + static_cast<double>(end0.tv_usec - start0.tv_usec);
	chrono1 = static_cast<double>(end1.tv_sec - start1.tv_sec) * 1000000 + static_cast<double>(end1.tv_usec - start1.tv_usec);
	chrono2 = static_cast<double>(end2.tv_sec - start2.tv_sec) * 1000000 + static_cast<double>(end2.tv_usec - start2.tv_usec);
	std::cout << "Time to process a range of " << this->_list.size() << " elements with std::list : " << chrono1 + chrono0 << " µs" << std::endl;
	std::cout << "Time to process a range of " << this->_vector.size() << " elements with std::vector : " << chrono2 + chrono0 << " µs" << std::endl;

	return;
}
