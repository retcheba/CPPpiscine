/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:26:36 by retcheba          #+#    #+#             */
/*   Updated: 2023/03/08 17:34:04 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <math.h>

class Fixed
{

public:

	Fixed( void );
	Fixed( Fixed const & src );
	Fixed( int const i );
	Fixed( float const f );
	~Fixed( void );

	Fixed &		operator=( Fixed const & rhs );

	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
	float		toFloat( void ) const;
	int			toInt( void ) const;

	bool		operator>( Fixed const & rhs );
	bool		operator<( Fixed const & rhs );
	bool		operator>=( Fixed const & rhs );
	bool		operator<=( Fixed const & rhs );
	bool		operator==( Fixed const & rhs );
	bool		operator!=( Fixed const & rhs );

	Fixed		operator+( Fixed const & rhs );
	Fixed		operator-( Fixed const & rhs );
	Fixed		operator*( Fixed const & rhs );
	Fixed		operator/( Fixed const & rhs );

	Fixed		operator++( void );
	Fixed		operator++( int );

	static Fixed	min( Fixed & first, Fixed & second );
	static Fixed	min( Fixed const & first, Fixed const & second );
	static Fixed	max( Fixed & first, Fixed & second );
	static Fixed	max( Fixed const & first, Fixed const & second );

private:

	int					_nb;
	static int const 	bits;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );
float			ft_pow( const float base, const float exponent );

#endif