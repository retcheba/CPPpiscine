/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 20:17:12 by retcheba          #+#    #+#             */
/*   Updated: 2023/04/22 16:48:37 by retcheba         ###   ########.fr       */
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

		this->_l.push_back(a);
		this->_v.push_back(a);
		i++;
	}
	return;
}

void	PmergeMe::mergeSortList( void )
{
	return;
}

void	PmergeMe::mergeSortVector( void )
{
	return;
}

void	PmergeMe::sort( void )
{
	if ( this->_argv == NULL )
	{
		std::cout << RED << "Error: argv is empty" << WHITE << std::endl;
		throw (std::exception());
	}

	fillContainer();

	std::cout << "Before:";
	for ( std::list<int>::iterator it = this->_l.begin(); it != this->_l.end(); ++it )
    	std::cout << " " << *it;
	std::cout << std::endl;

	struct timeval	start1;
	struct timeval	end1;
	double	chrono1;
	struct timeval	start2;
	struct timeval	end2;
	double	chrono2;

	gettimeofday(&start1, NULL);
	mergeSortList();
	gettimeofday(&end1, NULL);

	gettimeofday(&start2, NULL);
	mergeSortVector();
	gettimeofday(&end2, NULL);

	std::cout << "After:";
	for ( std::list<int>::iterator it = this->_l.begin(); it != this->_l.end(); ++it )
    	std::cout << " " << *it;
	std::cout << std::endl;

	chrono1 = static_cast<double>(end1.tv_sec - start1.tv_sec) * 1000000 + static_cast<double>(end1.tv_usec - start1.tv_usec);
	chrono2 = static_cast<double>(end2.tv_sec - start2.tv_sec) * 1000000 + static_cast<double>(end2.tv_usec - start2.tv_usec);
	std::cout << "Time to process a range of " << this->_l.size() << " elements with std::list : " << chrono1 << " µs" << std::endl;
	std::cout << "Time to process a range of " << this->_l.size() << " elements with std::vector : " << chrono2 << " µs" << std::endl;

	return;
}
